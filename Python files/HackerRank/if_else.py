n=int(input())
if n%2 != 0:
    print("Weird\n")
elif n in range(2,5+1):
    print("Not Weird\n")
elif n in range(6,20+1):
    print("Weird\n")
else:
    print("Not Weird\n")