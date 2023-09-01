#!/usr/bin/python3
import socket
import threading

# def client(num):
#     client = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
#     ip = socket.gethostbyname(socket.gethostname())
#     client.connect((ip,5000))
#     for i in range(0,10):
#         msg = "c"+str(num)+" : "+str(i)+"\n"
#         client.send(msg.encode('UTF-8'))

#     client.close()

if __name__ == "__main__":
    # tc1 = threading.Thread(target=client,args=(1,))
    # tc2 = threading.Thread(target=client,args=(2,))
    # tc3 = threading.Thread(target=client,args=(3,))

    # tc1.start()
    # tc2.start()
    # tc3.start()

    # tc1.join()
    # tc2.join()
    # tc3.join()
    client = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    ip = socket.gethostbyname(socket.gethostname())
    client.connect((ip,5000))
    while True:
        msg = input('>> ')
        client.send(msg.encode('UTF-8'))

    client.close()


    print("done......")



