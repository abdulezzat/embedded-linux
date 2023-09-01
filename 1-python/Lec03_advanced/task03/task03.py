#!/usr/bin/python3
#################################################
# Run this code (% Battery and make Notification)
#################################################
from pynotifier import Notification
import psutil 
import os

battery = psutil.sensors_battery()
percent = battery.percent

print(percent)
 ############### problem with send()
Notification(
    title="Hello",
    description="this is a notification",
    duration=5
).send()