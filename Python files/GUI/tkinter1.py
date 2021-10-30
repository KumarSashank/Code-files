import tkinter as tk
from tkinter import *

r = tk.Tk()
master = Tk()
r.title('Counting Seconds')
button = tk.Button(r, text='Stop', width=25,height=40, command=r.destroy)
button.pack()
var1 = IntVar()
Checkbutton(master, text='male', variable=var1).grid(row=0, sticky=W)
var2 = IntVar()
Checkbutton(master, text='female', variable=var2).grid(row=1, sticky=W)
r.mainloop()

