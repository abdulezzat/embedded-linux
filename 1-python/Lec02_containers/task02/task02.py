#!/usr/bin/python3
###########################################
# Write a code to suggest automatically activates for you 
# hint : use this url for suggestions :  https://www.boredapi.com/api/activity
###########################################
import requests

url = requests.get("https://www.boredapi.com/api/activity")
print("Activaty type: ",url.json()["type"])
print("Activaty: ",url.json()["activity"])
print("Activaty participants: ",url.json()["participants"])
print("Activaty link: ",url.json()["link"])


