key='srmapuniversity'
matrix=[]
key=key.upper()
print(key)
distinct_key=[]
for i in key:
    if i not in distinct_key:
        distinct_key.append(i)
# print(distinct_key)
alphabets='ABCDEFGHIKLMNOPQRSTUVWXYZ' #Removed J
temp=[]
for i in distinct_key:
    temp.append(i)
for i in alphabets:
    if i not in temp:
        temp.append(i)
matrix=[temp[0:5],temp[5:10],temp[10:15],temp[15:20],temp[20:25]]
for i in range(5):
    print(matrix[i])

