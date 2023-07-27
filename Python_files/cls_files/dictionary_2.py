a={1:5,2:7,3:11,4:15,5:10}
min = a.get(1)
max = a.get(1)
for i in range(1,5):
     if min>a[i]:min=a[i]
     if max<a[i]:max=a[i]
print("Minimum : ",min)
print("Maximum : ",max)
   