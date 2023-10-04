// Server side C/C++ program to demonstrate Socket
// programming
#include <arpa/inet.h>
#include <cstdlib>
#include <cstring>
#include <ifaddrs.h>
#include <iomanip>
#include <iostream>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>



namespace MyServer {
int server_fd, new_socket, valread;
int PORT = 8080;
struct sockaddr_in address;
int opt = 1;
int addrlen = sizeof(address);
} // namespace MyServer

int ServerGetInfo(int domain = AF_INET);
bool ServerStart();
int ServerListen();
int ServerRead(char *buffer);
void ServerSend(char *buffer);
void ServerShutDown();
char*  exec(const char* cmd);

int main() {
  if (ServerGetInfo() != 0) {
    perror("ServerGetInfo failed");
    exit(EXIT_FAILURE);
  };

  char buffer[1024] = {0};

  std::cout << "Server starting ..." << std::endl;
  if (!ServerStart()) {
    perror("\nServerStart failed");
    exit(EXIT_FAILURE);
  }
  std::cout << "Server started successfuly" << std::endl;
  if (ServerListen() < 0) {
    perror("\nServerListen failed");
    exit(EXIT_FAILURE);
  }
  while (true) {
    if (ServerRead(buffer) < 0) {
      perror("\nServerRead failed");
      exit(EXIT_FAILURE);
    }

    printf("Server received: %s", buffer);
    buffer[strlen(buffer) - 1] = '\0'; // remove the last \n

    if (strcmp(buffer, "exit") == 0 || strcmp(buffer, "stop") == 0) {
      ServerSend("Server Shuting Down");
	  printf("Server Shuting Down\n");
      break;
    } else {
    //   system(buffer);
	char* result = exec(buffer);
	ServerSend(result);
    }
  }
  ServerShutDown();

  return 0;
}

int ServerGetInfo(int domain) {
	using MyServer::PORT;
  // get the hostname of the server
  char hostname[128];
  if (gethostname(hostname, sizeof(hostname)) == -1) {
    std::cout << "Could not get the hostname of the server. Error: "
              << std::strerror(errno) << std::endl;
    return 1;
  }

  std::cout << "IP addresses for " << hostname << ":" << std::endl;

  struct ifaddrs *networkInterfaceList, *p;

  getifaddrs(
      &networkInterfaceList); // get information about the network interfaces

  // iterate over all the network interfaces we got and try to extract their IP
  // address
  for (p = networkInterfaceList; p != NULL; p = p->ifa_next) {
    char serverIPAddress[INET6_ADDRSTRLEN];
    void *addr;
    std::string ipVersion;

    // get the pointer to the address itself,
    // different fields in IPv4 and IPv6:
    if (p->ifa_addr->sa_family == AF_INET) { // IPv4
      struct sockaddr_in *ipv4 = (struct sockaddr_in *)p->ifa_addr;
      addr = &(ipv4->sin_addr);
      ipVersion = "IPv4";
    } else { // IPv6
      struct sockaddr_in6 *ipv6 = (struct sockaddr_in6 *)p->ifa_addr;
      addr = &(ipv6->sin6_addr);
      ipVersion = "IPv6";
    }

    // take the IP address of our hostname and convert it into a readable format
    inet_ntop(p->ifa_addr->sa_family, addr, serverIPAddress,
              sizeof(serverIPAddress));

    // sometime the IP address is empty so only print if there is one
    if (std::strlen(serverIPAddress) > 0 && p->ifa_addr->sa_family == domain)
      std::cout << "Interface: " << std::setw(6) << std::left << p->ifa_name
                << " " << ipVersion << ": " << serverIPAddress << std::endl;
  }

  freeifaddrs(networkInterfaceList);
  std::cout << "Interface: " << std::setw(11) << std::left << "PORT "
            << ": " << PORT << std::endl;
  std::cout << "--------------------------------------" << std::endl;
  return 0;
}

bool ServerStart() {
  using MyServer::address, MyServer::addrlen, MyServer::opt;
  using MyServer::server_fd, MyServer::new_socket, MyServer::valread;
  using MyServer::PORT;

  // Creating socket file descriptor
  if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
    perror("socket failed");
    return false;
  }

  // Forcefully attaching socket to the port
  if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt,
                 sizeof(opt))) {
    perror("setsockopt");
    return false;
  }
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = INADDR_ANY;
  address.sin_port = htons(PORT);

  // Forcefully attaching socket to the port 8080
  if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
    perror("bind failed");
    return false;
  }

  if (listen(server_fd, 3) < 0) {
    perror("listen");
    return false;
  }

  return true;
}

int ServerListen() {
  using MyServer::new_socket, MyServer::server_fd, MyServer::address,
      MyServer::addrlen;

  if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
                           (socklen_t *)&addrlen)) < 0) {
    perror("accept");
    return -1;
  }

  printf("Server: got connection from %s port %d\n",
         inet_ntoa(address.sin_addr), ntohs(address.sin_port));

  std::cout << "--------------------------------------" << std::endl;

  return 0;
}

void ServerSend(char *buffer) {
  using MyServer::new_socket;
  send(new_socket, buffer, strlen(buffer), 0);
}

void ServerShutDown() {
  using MyServer::new_socket, MyServer::server_fd;
  // closing the connected socket
  close(new_socket);
  // closing the listening socket
  shutdown(server_fd, SHUT_RDWR);
}

int ServerRead(char *buffer) {
  using MyServer::new_socket;
  int valread = read(new_socket, buffer, 1024);
  return valread;
}

char* exec(const char* cmd) {
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (fgets(buffer, sizeof buffer, pipe) != NULL) {
            result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);

	const int length = result.length();
  
    // declaring character array (+1 for null terminator)
    char* char_array = new char[length + 1];
  
    // copying the contents of the
    // string to char array
    strcpy(char_array, result.c_str());
  
    for (int i = 0; i < length; i++)
    {
        std::cout << char_array[i];
    }
    
    return char_array;
}