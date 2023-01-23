import pyautogui
import time
from datetime import datetime

code='''print("Enter number of time player can flip the card")
n=int(input())
a=[]
b=[]
for i in range(n):
    print("Arun flip the card")
    a1=[]
    x=input()
    a1.append(x)
    y=int(input())
    a1.append(y)
    a.append(a1)
    print("Arya flip the card")
    b1=[]
    x1=input()
    b1.append(x1)
    y1=int(input())
    b1.append(y1)
    b.append(b1)
s1,s2=0,0
for i in a:
    if i[0]=='P':
        s1+=i[1]*7
    elif i[0]=='Q':
        s1+=i[1]*10
    elif i[0]=='R':
        s1+=i[1]*10
    elif i[0]=='S':
        s1+=i[1]*5
for i in b:
    if i[0]=='P':
        s2+=i[1]*7
    elif i[0]=='Q':
        s2+=i[1]*10
    elif i[0]=='R':
        s2+=i[1]*10
    elif i[0]=='S':
        s2+=i[1]*5
print("Total scores {} {}".format(s1,s2))
if s1>s2:
    print("Arun won the game")
elif s2>s1:
    print("Arya won the game")
else:
    print("Game tied")'''

pyautogui.sleep(7)
pyautogui.write(code)
