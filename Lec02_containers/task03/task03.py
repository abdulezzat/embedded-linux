#!/usr/bin/python3
###########################################
# Write a code to Get your location
# hint: Get your public IP : https://api.ipify.org/?format=json
# hint : Get your location : https://ipinfo.io/<YOUR_IP>/geo
###########################################
import requests

def GetMyPublicIP():
    return requests.get("https://api.ipify.org/?format=json").json()["ip"]

def GetMyLocation():
    ip = GetMyPublicIP()                
    return requests.get("https://ipinfo.io/"+ip+"/geo").json()

print(GetMyLocation())