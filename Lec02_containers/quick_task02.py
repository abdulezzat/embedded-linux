#!/usr/bin/python3
#Write code to find automatically bitcoin rate

import requests

url = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")
print(url.json()['bpi']['USD'])