import array as ar
name=input("Enter ur name:")
count=len(name)
a=ar.array('i',[name[count-1]])
reverse=name
i=2
while i<=count:
      a.append(name[count-i])
      print(name[i],end="")
      i=i-1
print()
