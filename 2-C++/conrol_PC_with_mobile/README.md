# PC Control Using Sockets
## Description

This project aims to provide a convenient and efficient way to control your laptop remotely using a mobile application. 
By establishing a socket connection between your computer and the mobile app, you can perform various actions on your computer, 
by sending and executing terminal commands and then receiving the result then display it on the mobile app.

special commands:
* `stop` or `exit`: this will shut down the server.


## Table of Contents

- [Installation](#installation)
- [Usage](#usage)

## Installation

- Install the [Tcp Udp Server & Client](https://play.google.com/store/apps/details?id=tcpudpserverclient.steffenrvs.tcpudpserverclient&pcampaignid=web_share) application on your phone.
- Get your IP: just run the server and the IP will be printed to the screen as shown:
  
    ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/5b783be8-0434-465c-aeee-16e6c1b01f5c)

- Create a new client by adding your device IP address and the port number used in the program and choose TCP.

  ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/f194ae54-dbe8-4da3-8cf6-dd95f3b1bc02)
  ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/fa2df252-496c-46ef-b0c9-3df43cd18588)

- Run the program on the PC and click the play button in the app to start the connection.
  
  ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/090d91d6-fc7d-47ae-8fd1-847baf901ac0)

- Send and receive data from the screen below.
  
  ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/c5178e50-aa4c-4370-b42c-eda4542e94f2)

- To run the app on your PC use the following commands:
  * `g++ -o ser server.cpp`
  * `./ser`

## Usage

- PC Side "Server":
  * Start the server:

  ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/1a428dc9-65c9-4016-bf6d-1ca1fa13382c)

  * After the client connects successfully:

  ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/5ee09cf0-dcc2-49a2-92f2-f0324f5cc868)

  * Receiving and Executing commands:
 
    ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/aa97b1b3-19c3-41d3-8457-f5f6e5074114)
    
    Here the client sends to the server `ls` command, and the directory that contains the executable file contains:
    
    ![image](https://github.com/abdulezzat/embedded-linux/assets/41158260/f32f14c2-d135-4b14-a984-23e20d9cfc68)



- Mobile Side "Client":
  * Start the Client:

   ![WhatsApp Image 2023-10-11 at 18 44 50_b8723205](https://github.com/abdulezzat/embedded-linux/assets/41158260/c6890c01-76eb-4114-bb48-82e020689dc2)

  * After successful connection:
 
    ![WhatsApp Image 2023-10-11 at 18 44 50_a315cb83](https://github.com/abdulezzat/embedded-linux/assets/41158260/261267a1-793c-417b-9309-4ff9285e1774)

 
  * Send terminal command to the server:
 
    ![WhatsApp Image 2023-10-11 at 18 44 50_48cdff82](https://github.com/abdulezzat/embedded-linux/assets/41158260/502024dc-feaf-40b9-858c-962427533e84)

  The client sent `ls` command and then received and displayed the result.
 
  * Shut down the server:

    ![WhatsApp Image 2023-10-11 at 18 44 51_97ecadcc](https://github.com/abdulezzat/embedded-linux/assets/41158260/79256f00-ebce-49cc-9cac-1f93fb5be866)

    The client sent `stop` command to shut down the server.

 
    
