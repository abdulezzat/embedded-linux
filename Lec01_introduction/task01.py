#!/usr/bin/python3
#Write a Python program to count the number 4 in a given list.
n = int(input("Enter the size of list : "))
numList = list(map(float, input("Enter the list numbers separated by space ").strip().split()))[:n]
print("Number 4 appeard {} times".format(numList.count(4)))