list_1=[[10,20,30],[40,50,60],[70,80,90]]
list_2=[[1,4,7],[2,5,8],[3,6,9]]

for i in range(3):
    for j in range(3):
        print(list_1[i][j],'*',list_2[i][j],' = ',list_1[i][j]*list_2[i][j])