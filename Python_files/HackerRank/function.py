
def is_leap(a):
    if a%400==0:
        return True
    elif a%100==0:
        return False
    elif a%4==0:
        return True
    else:
        return False

n=int(input())
print(is_leap(n))

