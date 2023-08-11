#!/usr/bin/python3
# Write a Python program which accepts the radius of a circle from the user and compute the area.
from math import pi

r = int(input("Enter the radius of the circle : "))
print("Circle area = "+ str(pi * r**2))