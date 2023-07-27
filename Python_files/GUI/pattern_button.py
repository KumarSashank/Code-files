import tkinter as tk
from tkinter import *

def pattern_1():
    str1="*"
    for i in range(1,6):
        str1 = '* '*i
        w = Label(r, text=str1)
        w.pack()
        w=Label(r, text='\n')

def pattern_2():
    str1="*"
    for i in range(6,0,-1):
        str1 = '* '*i
        w = Label(r, text=str1)
        w.pack()
        w=Label(r, text='\n')

r = tk.Tk()
r.title('Pattern Prinitng')
button1 = tk.Button(r, text='pattern 1', width=25, command=(lambda: pattern_1()))
button2 = tk.Button(r, text='patttern 2', width=25, command=(lambda: pattern_2()))
button3 = tk.Button(r, text='Exit', width=25, command=r.destroy)
button1.pack()
button2.pack()
button3.pack()
r.mainloop()

