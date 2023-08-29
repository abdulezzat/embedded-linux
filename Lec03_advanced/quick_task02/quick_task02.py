#!/usr/bin/python3
###########################################
# write a Python program to count the Number of words in a file.
###########################################
f = open('demo.txt','r')
str = f.read()
f.close()
print(len(str.split()))