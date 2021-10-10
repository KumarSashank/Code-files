# code = open("/Users/kumarsashank/Desktop/Code files/Python files/cls_files/rough.txt","r")
# for line in code:
#     if  not '#' in line:
#         print(line)

# with open("/Users/kumarsashank/Desktop/Code files/Python files/cls_files/rough.txt") as file1:
#     with open("without.txt", "w") as file2:
#         for line in file1:
#             if  not '#' in line:
#              file2.write(line)
# print("Single line comments removed\n")


with open("/Users/kumarsashank/Desktop/Code files/Python files/cls_files/without.py") as file1:
    with open("withcomment.py", "w") as file2:
        for line in file1:
            if   '#' in line:
                a=line
                length=len(a)
                for i in range(length):
                    if(a[i]=='#'):
                        num=i
                a=a[:num]
                b="\n"
                a=a+b
                file2.write(a)
            else:
                file2.write(line)
print("Single line comments removed\n")

#trying for multiline comment

# for line in file1:
#     if "'''" in line:
#         x=line
#         length2=len(x)
#         for i in x:
