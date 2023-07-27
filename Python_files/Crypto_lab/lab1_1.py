#read input from file
import sys
import os

f=open('Python files/Crypto_lab/input.txt','r')
input_text=f.read()
f.close()

list1=input_text.split(" ")
char_count=0
word_count=len(input_text.split(" "))
for i in range(word_count):
    print(list1[i],end=" ")
    for j in range(len(list1[i])):
        print(ord(list1[i][j]),end=" ")
        char_count+=1
    print()
print("Character count:",char_count)