matrix_1 = [[1,2,3],
            [3,4,2],
            [3,2,1]]
     
matrix_2 = [[1,1,1],
            [3,4,2],
            [3,2,1]]
list_1=[]
for i in range(3):
    for j in range(3):
        k=0
        for l in range(3):
            k=matrix_1[i][l]*matrix_2[l][j]+k
        list_1.append(k)
print(list_1)