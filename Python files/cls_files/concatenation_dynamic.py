i=0
string=""
print("Enter the char and enter 0 to stop")
while(i>=0):
    x=input()
    if(x!='0'):
        string=string+x
    else:
        break
print(string)