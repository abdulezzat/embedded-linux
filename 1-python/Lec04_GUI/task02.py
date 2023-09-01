#!/usr/bin/python3

from tkinter import *

def on_click_on():
    c.itemconfig(ovel,fill = 'red')
    result_l.config('Led is ON')

def on_click_off():
    c.itemconfig(ovel,fill = 'white')
    result_l.config('Led is OFF')

win = Tk()
win.title('task02')
result_l = Label(win,text='Led is OFF ')
button_on = Button(win,text='Led On',width=25,command=on_click_on)
button_off = Button(win,text='Led OFF',width=25,command=on_click_off)

c= Canvas(win,width=400, height=400)


#Draw an Oval in the canvas
# c.create_oval(60,60,210,210)
ovel = c.create_oval(60,60,210,210,fill='white')

c.grid(row=2,column=2)
result_l.grid(row=4,column=2)
button_on.grid(row=5,column=2)
button_off.grid(row=6,column=2)

win.mainloop()