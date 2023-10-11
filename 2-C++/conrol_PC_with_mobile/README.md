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
 
  * After the client connects successfully:
 
  * Receiving and Executing commands:

- Mobile Side "Client":
  * Start the Client:
 
  * After successful connection:
 
  * Send terminal command to the server:
 
  * Receive the result:
 
  * Shut down the server:
 
    
