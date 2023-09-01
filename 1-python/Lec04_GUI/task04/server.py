#!/usr/bin/python3
import socket
import _thread

def on_new_client(c, a):
    while True:
        rodata=client.recv(1024)
        if not rodata:
            break
        print(f"{address} is sending to you this :")
        print(f"{rodata.decode('UTF-8')}")
    client.close()

s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
ip=socket.gethostbyname(socket.gethostname())
print("your ip is : "+ip)
print("==================================")
s.bind((ip,5000))
s.listen(5)
while True:
    client,address = s.accept()
    _thread.start_new_thread(on_new_client,(client,address,))

s.close()
    
