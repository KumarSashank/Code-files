def add(a,b):
    return a + b

def subtract(a,b):
    return a - b


def multiply(a,b):
    return a*b

def divison(a,b):
    return a/b 

print("Calculator")
print("1.Add")
print("2.Subtract")
print("3.Multiply")
print("4.Divide")

choice = input("Enter choice(1/2/3/4):")

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

print(add(num1,num2))
print(subtract(num1,num2))
print(multiply(num1,num2))
print(divison(num1,num2))