#!/usr/bin/python3
# Print the calendar of a given month and year
import calendar
m = int(input("Enter the month : "))
y = int(input("Enter the year : "))
print("\n")
print(calendar.month(y,m))