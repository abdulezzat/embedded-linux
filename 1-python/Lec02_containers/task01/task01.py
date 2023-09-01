#!/usr/bin/python3
#############################################################################
# 1-Make your module that contain favourite websites and have function 
# called Firefox take url and open website 
#
# 2- then make main file and print menu of sites for user and let him choice
#############################################################################
from firelink import favourite_websites as urls
from firelink import firefox
def main():
    print("Select one website to open :",[ x for x in urls.keys()])
    site_name = input(">> ").lower()
    while (site_name not in urls):
        site_name = input("Invalid website...\n>> ").lower()

    firefox(urls[site_name])


if __name__ == '__main__':
    main()