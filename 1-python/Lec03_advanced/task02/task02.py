#!/usr/bin/python3
#################################################
# Using “Pyautogui” to open Emails and change Emails from unread to read
#################################################

import pyautogui
import time

def open_thundermail():
    pyautogui.hotkey('win')
    time.sleep(0.5)
    pyautogui.typewrite("mail")
    pyautogui.hotkey('enter')
    time.sleep(10)

def mark_all_read():
    pyautogui.hotkey('shift' ,'C')
    time.sleep(0.5)

def close_current_app():
    pyautogui.hotkey('alt','f4')
    time.sleep(0.5)

if __name__ == '__main__':
    open_thundermail()
    mark_all_read()
    close_current_app()

