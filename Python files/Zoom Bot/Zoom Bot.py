import subprocess
import pyautogui


subprocess.call(["/usr/bin/open", "/Applications/zoom.us.app"])

locate = pyautogui.locateCenterOnScreen('/Users/kumarsashank/Desktop/1.png')
pyautogui.moveTo(locate)
pyautogui.click()
pyautogui.click()
