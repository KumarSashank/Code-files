from pyautogui import *
import pyautogui
import image
import time
import random
from datetime import datetime

find = pyautogui.locateCenterOnScreen("/Users/kumarsashank/Downloads/Bot/Apple.png",grayscale=True,confidence=.9)
print(find.x/2,find.y/2)
pyautogui.click(find.x/2,find.y/2)