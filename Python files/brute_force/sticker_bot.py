import pyautogui
import time
from datetime import datetime

n=int(input("Enter the number: "))
time.sleep(10)
for i in range(n):
    pyautogui.write("Po ra nuv")
    pyautogui.press('enter')