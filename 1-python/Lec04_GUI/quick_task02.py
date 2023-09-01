#!/usr/bin/python3
####################################
# Write a program that asks the user to type a word
# and return him its reverse
####################################
from tkinter import *

def on_click():
    result_l.config(text=e1.get()[::-1])
win = Tk()
win.title('quick_task02')
label1 = Label(win,text='Enter a word : ')
result_l = Label(win)
e1 = Entry(win)
button = Button(win,text='Validate',width=25,command=on_click)

label1.grid(row=1,column=1)
e1.grid(row=1,column=2)
result_l.grid(row=2,column=2)
button.grid(row=3,column=2)
win.mainloop()
