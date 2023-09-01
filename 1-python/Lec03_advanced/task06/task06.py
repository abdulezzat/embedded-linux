#!/usr/bin/python3
#################################################
# Python program to parse header file and read
# all prototypes of function and insert it into
# excel sheet with unique ID start with IDX0
#################################################
import xlsxwriter

prototypes = []

with open("headers.h", mode = "r") as f:
    lines = f.readlines()
    prototypes = [l for l in lines if (('(' in l) and (')' in l) and (';' in l))]


workbook = xlsxwriter.Workbook('headers.xlsx')
worksheet = workbook.add_worksheet()
 
worksheet.write(0,0, 'Function')
worksheet.write(0,1, 'ID')
 
r = 1
id = 0
for p in prototypes:
    worksheet.write(r,0, p)
    worksheet.write(r,1, 'IDX%05d' %id)
    r+=1
    id+=1
workbook.close()

