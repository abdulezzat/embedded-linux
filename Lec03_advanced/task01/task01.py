#!/usr/bin/python3
#################################################
# Write python code to generate Init function of GPIO for AVR
#################################################

port_name = input('Please enter port name: ')[0]
port_mode = ""
print('Enter 0 or in to set mode to input\nEnter 1 or out to set mode to output')
for i in range(0,8):
    mode = input(f"Please enter Bit {i} mode: ")
    if mode == '0' or mode =='in':
        port_mode = '0' + port_mode
    elif mode == '1' or mode =='out':
        port_mode = '1' + port_mode
    else:
        print("invalide mode...")
        i-=1

with open("GPIO.c", mode = "w") as f:
    f.write(f"void Init_PORT{port_name}_DIR (void)\n"+
    "{\n"+
    f"\tDDR{port_name} = 0b{port_mode};\n"+
    "}\n")

