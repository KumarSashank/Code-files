import subprocess
from subprocess import Popen
import pyautogui
import time
import pandas as pd
from datetime import datetime
import os
time.sleep(5)

print(pyautogui.locateCenterOnScreen('C:\\Users\\sasha\\OneDrive\\Documents\\Python\\My bot\\among.png',grayscale=True,confidence=.5))