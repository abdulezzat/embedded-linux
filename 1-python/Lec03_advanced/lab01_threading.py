#!/usr/bin/python3
import threading

def task1(num):
    for i in range(0, num):
        print("task1::"+str(i))

def task2(num):
    for i in range(0, num):
        print("task2::"+str(i))

if __name__ == '__main__':
    t1 = threading.Thread(target=task1,args=(100,))
    t2 = threading.Thread(target=task2,args=(100,))

    t1.start()
    t2.start()

    t1.join()
    t2.join()

    print("Done!")