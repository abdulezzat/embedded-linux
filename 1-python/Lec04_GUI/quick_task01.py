#!/usr/bin/python3
from tkinter import *

window = Tk()
window.title('quick_task01')
b1 = Button(window,text='Button1')
b2 = Button(window,text='Button2')
b3 = Button(window,text='Button3')
b4 = Button(window,text='Button4')

b1.grid(row=1,column=2)
b2.grid(row=2,column=1)
b3.grid(row=2,column=3)
b4.grid(row=3,column=2)

window.mainloop()