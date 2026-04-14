# pip install pyautogui

import pyautogui
import time

# take input
n = int(input("Enter a number: "))

print("You have 5 seconds to open a text editor...")
time.sleep(5)  # time to switch to notepad or anywhere

# draw pyramid
for i in range(1, n + 1):
    pyautogui.write('#' * i)
    pyautogui.press('enter')