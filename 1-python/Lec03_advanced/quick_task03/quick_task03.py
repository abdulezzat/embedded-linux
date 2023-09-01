#!/usr/bin/python3
###########################################
# Write a Python program to write a “list” to a file.
###########################################

lst = ['my','name','is','Abdullah']
f = open('demo.txt','w')
f.write(' '.join(lst))
f.close()