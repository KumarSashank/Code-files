from tkinter import *

root = Tk()
root.title("K's Calc")
#root.iconbitmap("Python\icon.ico")


e = Entry(root, width=35, borderwidth=10)
e.grid(row=0, column=0, columnspan=4)


def button_click(number):
    current = e.get()
    e.delete(0, END)
    e.insert(0, current+str(number))


def button_clear():
    e.delete(0, END)


def button_add():
    global num
    num = int(e.get())
    global math
    math = "add"
    e.delete(0, END)


def button_sub():
    global num
    num = int(e.get())
    global math
    math = "Subtraction"
    e.delete(0, END)


def button_div():
    global num
    num = int(e.get())
    global math
    math = "Divison"
    e.delete(0, END)


def button_pro():
    global num
    num = int(e.get())
    global math
    math = "Product"
    e.delete(0, END)


def button_square():
    global num
    num = int(e.get())
    global math
    math = "Square"
    e.delete(0, END)


def button_equal():
    current = int(e.get())
    e.delete(0, END)
    sq = 1
    if math == "add":
        e.insert(0, current+num)
    elif math == "Subtraction":
        e.insert(0, num-current)
    elif math == "Divison":
        if num == 0 and current == 0:
            e.insert(0, "None")
        else:
            if current == 0:
                e.insert(0, "Infinte")
            else:
                e.insert(0, (num/current))
    elif math == "Product":
        e.insert(0, num*current)
    elif math == "Square":
        sq = pow(num, current)
        e.insert(0, sq)


b = Button(root, text="7", padx=18, pady=10,
           borderwidth=5, command=lambda: button_click(7))
b.grid(row=1, column=0)
b1 = Button(root, text="8", padx=18, pady=10,
            borderwidth=5, command=lambda: button_click(8))
b1.grid(row=1, column=1)

b2 = Button(root, text="9", padx=18, pady=10,
            borderwidth=5, command=lambda: button_click(9))
b2.grid(row=1, column=2)

b3 = Button(root, text="/", padx=18, pady=10, borderwidth=5,
            command=button_div)
b3.grid(row=1, column=3)

b4 = Button(root, text="4", padx=18, pady=10,
            borderwidth=5, command=lambda: button_click(4))
b4.grid(row=2, column=0)
b5 = Button(root, text="5", padx=18, pady=10,
            borderwidth=5, command=lambda: button_click(5))
b5.grid(row=2, column=1)

b6 = Button(root, text="6", padx=18, pady=10,
            borderwidth=5, command=lambda: button_click(6))
b6.grid(row=2, column=2)
b7 = Button(root, text="*", padx=18, pady=10,
            borderwidth=5, command=button_pro)
b7.grid(row=2, column=3)
b8 = Button(root, text="1", padx=18, pady=10,
            borderwidth=5, command=lambda: button_click(1))
b8.grid(row=3, column=0)
b9 = Button(root, text="2", padx=18, pady=10,
            borderwidth=5, command=lambda: button_click(2))
b9.grid(row=3, column=1)
b10 = Button(root, text="3", padx=18, pady=10,
             borderwidth=5, command=lambda: button_click(3))
b10.grid(row=3, column=2)
b11 = Button(root, text="-", padx=18, pady=10,
             borderwidth=5, command=button_sub)
b11.grid(row=3, column=3)
b12 = Button(root, text="0", padx=18, pady=10,
             borderwidth=5, command=lambda: button_click(0))
b12.grid(row=4, column=0)
b13 = Button(root, text="Clear", padx=31, pady=10,
             borderwidth=5, command=button_clear)
b13.grid(row=4, column=1, columnspan=2)
b14 = Button(root, text="+", padx=18, pady=10,
             borderwidth=5, command=button_add)
b14.grid(row=4, column=3)
b13 = Button(root, text="^", padx=18, pady=10,
             borderwidth=5, command=button_square)
b13.grid(row=5, column=0)
b14 = Button(root, text="=", padx=69, pady=10,
             borderwidth=8, command=button_equal)
b14.grid(row=5, column=1, columnspan=3)
b15 = Button(root, text="Exit", width=30, borderwidth=10, command=root.quit)
b15.grid(row=6, column=0, columnspan=4)
root.mainloop()