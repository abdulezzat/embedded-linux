#!/usr/bin/python3
###########################################
# Using PyAutoGUI 
# - To open vscode 
# - install clangd from extension
# - install c++ testmate  from extension
# - install c++ helper  from extension
# - install cmake  from extension
# - install cmake tools  from extension
###########################################
import pyautogui
import time
import os

# if platform.system() == "Windows":
#     pyautogui.hotkey('winleft')
# elif platform.system() == "Linux":
#     pyautogui.hotkey('superleft')


dir_path = os.path.dirname(os.path.realpath(__file__))
def check_install():
    pointxy = pyautogui.locateOnScreen(dir_path+"/uninstall.png",confidence=.8)
    return (pointxy is not None)

def install_ex(ex_id):
    pyautogui.hotkey('ctrl', 'shift' , 'x')

    #clear the field
    pyautogui.hotkey('ctrl','a')
    pyautogui.hotkey('delete')

    pyautogui.typewrite(ex_id)
    time.sleep(5)
    pyautogui.hotkey('\t')
    pyautogui.hotkey('down')
    pyautogui.hotkey('enter')
    if not check_install():
        pointxy = None
        while pointxy is None:
            pointxy = pyautogui.locateOnScreen(dir_path+"/install.png",confidence=.8)

        if pointxy is not None:
            pyautogui.moveTo(pointxy[0] + 10,pointxy[1] + 10,duration=0.5)
            time.sleep(0.1)

        pyautogui.click()
        print("installing")
        pyautogui.FAILSAFE = False
        pyautogui.moveTo(0,0,duration=0.5)
        time.sleep(1)
    else:
        print("already installed")

def open_vscode():
    pyautogui.hotkey('win')
    time.sleep(0.5)
    pyautogui.typewrite("vs")
    pyautogui.hotkey('enter')
    time.sleep(10)

def main():
    ex_id_lst = ['llvm-vs-code-extensions.vscode-clangd',
              'matepek.vscode-catch2-test-adapter',
              'amiralizadeh9480.cpp-helper',
              'twxs.cmake',
              'ms-vscode.cmake-tools']    
    open_vscode()
    for x in ex_id_lst:
        install_ex(x)

    time.sleep(0.5)


if __name__ == '__main__':
    main()



