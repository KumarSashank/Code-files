#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'getString' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING input_str as parameter.
#

def getString(input_str):
    # Write your code here
    l=0
    r=1
    max_num=1
    ans=[]
    string=''+input_str[0]
    
    length=len(input_str)
    while(r<length):
        
        if input_str[r] in string:
            l=l+1
            if max_num<len(string):
                ans.clear()
                ans.append(string)
                max_num=len(string)
                string=string[1:]
            elif max_num==len(string):
                ans.append(string)
                string=string[1:]
        else:
            string+=input_str[r]
        r=r+1
    print(ans)
    return 'hai'

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    input_str = input()

    result = getString(input_str)

    fptr.write(result + '\n')

    fptr.close()
