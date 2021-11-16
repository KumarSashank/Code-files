from pyautogui import *
import subprocess
from subprocess import Popen
import pyautogui
import time
import pandas as pd
from datetime import datetime
import os



def sign_in(meetingid, pswd):

 subprocess.Popen(["/usr/bin/open", "/Applications/zoom.us.app"])
 time.sleep(5)

 #clicking the join button.
 find = pyautogui.locateCenterOnScreen(r"/Users/kumarsashank/Desktop/Code files/Python files/test_bot/Zoom_Bot/join2.png",grayscale=True,confidence=.9)
 print(find)
 pyautogui.click(find.x/2,find.y/2)
 time.sleep(5)

 pyautogui.write(meetingid)
 pyautogui.press('enter') 
 time.sleep(5)


 pyautogui.write(pswd)
 time.sleep(5)
 pyautogui.press('enter')

#here also change the path, and keep the path for the monday.csv
df = pd.read_csv(r"/Users/kumarsashank/Desktop/Code files/Python files/test_bot/Zoom_Bot/monday.csv")

while True:
    # checking of the current time exists in our csv file
    now = datetime.now().strftime("%H:%M")
    if now in str(df['timings']):

       row = df.loc[df['timings'] == now]
       m_id = str(row.iloc[0,1])
       m_pswd = str(row.iloc[0,2])

       sign_in(m_id, m_pswd)
       time.sleep(40)
       print('signed in')

