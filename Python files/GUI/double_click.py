import sys
from tkinter import *

def P1(event):
    w_func_p1=Label(text="Left click twice to exit")
    w_func_p1.pack()

def Hint(event):
    w_func_hint=Label(text="I will not quit by pressing a right click")
    w_func_hint.pack()

def quit(event):
    sys.exit()

def Pattern_1():
    w_func_p1=Label(text="pattern 1")
    w_func_p1.pack()

w=Button(None,text="Pattern 1",command=Pattern_1)
w.pack()
w.bind("<Button-1>",P1)
w.bind('<Double-1>',quit)
w.bind('<Button-3>',Hint)

w.mainloop()