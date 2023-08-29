#!/usr/bin/python3
###########################################
# Write a Python program to count the number of lines in a text file.
###########################################
f = open('demo.txt','r')
lst = f.readlines()
f.close()
print(len(lst))