#!/usr/bin/python3
# Lab (Add shortcuts)

import keyboard
import subprocess

def on_press():
    subprocess.run(['nautilus', '/home'])

def listener():
    shortcut = "ctrl + alt + q"
    keyboard.add_hotkey(shortcut, on_press)
    keyboard.wait()

listener()