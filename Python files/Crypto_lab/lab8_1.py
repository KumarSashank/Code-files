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


text='LIIUDLTQNSLIZETQVTPKZEZFVBVZ'
# text='Rak'
text=text.upper()
list_1=[]

#making group of pairs 
text=text.replace(' ','')
list_1=list(text)
# print(list_1)
for i in range(len(list_1)):
    if i%2!=0:
        if list_1[i-1]==list_1[i]:
            list_1.insert(i,'X')
# print(list_1)
if(len(list_1)%2!=0):
    list_1.append('X')
# print(list_1)

#making pairs
list_2=[]
for i in range(0,len(list_1),2):
    list_2.append(list_1[i:i+2])
print(list_2)

def find_position(temp,l):
    for i in range(5):
        for j in range(5):
            if l[i][j]==temp:
                return i,j

#decryp
cipher=[]

for e in list_2:
    p1,q1=find_position(e[0],matrix)
    p2,q2=find_position(e[1],matrix)
    if p1==p2:
        if q1==0:
            cipher.append(matrix[p1][4])
        else:
            cipher.append(matrix[p1][(q1-1)])
        if q2==0:
            cipher.append(matrix[p2][4])
        else:
            cipher.append(matrix[p2][(q2-1)])
    elif q1==q2:
        if p1==0:
            cipher.append(matrix[4][q1])
        else:
            cipher.append(matrix[p1-1][q1])
        if p2==0:
            cipher.append(matrix[4][q2])
        else:
            cipher.append(matrix[p2-1][q2])
    else:
        cipher.append(matrix[p1][q2])
        cipher.append(matrix[p2][q1])
print(cipher)

str=''
for i in cipher:
    str+=i
print(str)