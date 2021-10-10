
from PIL.ImageOps import grayscale
import pyautogui
import time
from datetime import datetime

for i in range(10000):
    time.sleep(4)
    invite=pyautogui.locateCenterOnScreen(r"extension.png",grayscale=True,confidence=.9)
    print(invite)
    print(i)
    if invite!=None:
         pyautogui.click(invite.x/2,invite.y/2)
         break