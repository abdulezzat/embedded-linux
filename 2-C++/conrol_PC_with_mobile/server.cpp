// Server side C/C++ program to demonstrate Socket
// programming
#include <iostream>
#include <cstring>
#include <sys/types.h>
#include <ifaddrs.h>
#include <iomanip>
#include <arpa/inet.h>

#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <unistd.h>
#define PORT 8080
// int main(int argc, char const* argv[])
// {
// 	int server_fd, new_socket, valread;
// 	struct sockaddr_in address;
// 	int opt = 1;
// 	int addrlen = sizeof(address);
// 	char buffer[1024] = { 0 };
// 	char* hello = "Hello from server";

// 	// Creating socket file descriptor
// 	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
// 		perror("socket failed");
// 		exit(EXIT_FAILURE);
// 	}

// 	// Forcefully attaching socket to the port 8080
// 	if (setsockopt(server_fd, SOL_SOCKET,
// 				SO_REUSEADDR | SO_REUSEPORT, &opt,
// 				sizeof(opt))) {
// 		perror("setsockopt");
// 		exit(EXIT_FAILURE);
// 	}
// 	address.sin_family = AF_INET;
// 	address.sin_addr.s_addr = INADDR_ANY;
// 	address.sin_port = htons(PORT);

// 	// Forcefully attaching socket to the port 8080
// 	if (bind(server_fd, (struct sockaddr*)&address,
// 			sizeof(address))
// 		< 0) {
// 		perror("bind failed");
// 		exit(EXIT_FAILURE);
// 	}
// 	if (listen(server_fd, 3) < 0) {
// 		perror("listen");
// 		exit(EXIT_FAILURE);
// 	}
// 	if ((new_socket
// 		= accept(server_fd, (struct sockaddr*)&address,
// 				(socklen_t*)&addrlen))
// 		< 0) {
// 		perror("accept");
// 		exit(EXIT_FAILURE);
// 	}
// 	valread = read(new_socket, buffer, 1024);
// 	printf("%s\n", buffer);
// 	send(new_socket, hello, strlen(hello), 0);
// 	printf("Hello message sent\n");

// 	// closing the connected socket
// 	close(new_socket);
// 	// closing the listening socket
// 	shutdown(server_fd, SHUT_RDWR);
// 	return 0;
// }
int get_myIP_addresses();
int main()
{
	if(get_myIP_addresses() != 0){
		perror("get server IP failed");
		exit(EXIT_FAILURE);
	};
	int server_fd, new_socket, valread;
	struct sockaddr_in address;
	int opt = 1;
	int addrlen = sizeof(address);
	char buffer[1024] = {0};
	char *hello = "Hello from server";

	// Creating socket file descriptor
	if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
	{
		perror("socket failed");
		exit(EXIT_FAILURE);
	}

	// Forcefully attaching socket to the port 8080
	if (setsockopt(server_fd, SOL_SOCKET,
				   SO_REUSEADDR | SO_REUSEPORT, &opt,
				   sizeof(opt)))
	{
		perror("setsockopt");
		exit(EXIT_FAILURE);
	}
	address.sin_family = AF_INET;
	address.sin_addr.s_addr = INADDR_ANY;
	address.sin_port = htons(PORT);

	// Forcefully attaching socket to the port 8080
	if (bind(server_fd, (struct sockaddr *)&address,
			 sizeof(address)) < 0)
	{
		perror("bind failed");
		exit(EXIT_FAILURE);
	}
	if (listen(server_fd, 3) < 0)
	{
		perror("listen");
		exit(EXIT_FAILURE);
	}
	if ((new_socket = accept(server_fd, (struct sockaddr *)&address,
							 (socklen_t *)&addrlen)) < 0)
	{
		perror("accept");
		exit(EXIT_FAILURE);
	}
	valread = read(new_socket, buffer, 1024);
	printf("%s\n", buffer);
	send(new_socket, hello, strlen(hello), 0);
	printf("Hello message sent\n");

	// closing the connected socket
	close(new_socket);
	// closing the listening socket
	shutdown(server_fd, SHUT_RDWR);
	return 0;
}

int get_myIP_addresses()
{
	// get the hostname of the server
	char hostname[128];
	if (gethostname(hostname, sizeof(hostname)) == -1)
	{
		std::cout << "Could not get the hostname of the server. Error: " << std::strerror(errno) << std::endl;
		return 1;
	}

	std::cout << "IP addresses for " << hostname << ":" << std::endl
			  << std::endl;

	struct ifaddrs *networkInterfaceList, *p;

	getifaddrs(&networkInterfaceList); // get information about the network interfaces

	// iterate over all the network interfaces we got and try to extract their IP address
	for (p = networkInterfaceList; p != NULL; p = p->ifa_next)
	{
		char serverIPAddress[INET6_ADDRSTRLEN];
		void *addr;
		std::string ipVersion;

		// get the pointer to the address itself,
		// different fields in IPv4 and IPv6:
		if (p->ifa_addr->sa_family == AF_INET)
		{ // IPv4
			struct sockaddr_in *ipv4 = (struct sockaddr_in *)p->ifa_addr;
			addr = &(ipv4->sin_addr);
			ipVersion = "IPv4";
		}
		else
		{ // IPv6
			struct sockaddr_in6 *ipv6 = (struct sockaddr_in6 *)p->ifa_addr;
			addr = &(ipv6->sin6_addr);
			ipVersion = "IPv6";
		}

		// take the IP address of our hostname and convert it into a readable format
		inet_ntop(p->ifa_addr->sa_family, addr, serverIPAddress, sizeof(serverIPAddress));

		// sometime the IP address is empty so only print if there is one
		if (std::strlen(serverIPAddress) > 0)
			std::cout << "Interface: " << std::setw(6) << std::left << p->ifa_name << " " << ipVersion << ": " << serverIPAddress << std::endl;
	}

	freeifaddrs(networkInterfaceList);

	return 0;
}
