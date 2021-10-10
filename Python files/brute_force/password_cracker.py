import pyautogui
import time
from datetime import datetime

for i in range(10):
    for j in range(10):
        for k in range(10):
            for v in range(10):
                pyautogui.write(str(i))
                pyautogui.write(str(j))
                pyautogui.write(str(k))
                pyautogui.write(str(v))
                pyautogui.press('enter')
                time.sleep(0.1)
                pyautogui.press('backspace',presses=4)