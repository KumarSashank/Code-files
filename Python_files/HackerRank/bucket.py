#!/bin/python3

import math
import os
import random
import re
import sys



#
# Complete the 'strokesRequired' function below.
#
# The function is expected to return an INTEGER.
# The function accepts STRING_ARRAY picture as parameter.
#

def strokesRequired(picture):
    # Write your code here
    #Complete the function minimumFills in the editor below. The function must return an integer that represents the minimum number of fills required to completely repaint the picture.
    a = picture
    n = len(a)
    m = len(a[0])
    print(n,m)
    #print(a)
    #print(a[0])
    #print(a[1])
    #print(a[2])

            



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    picture_count = int(input().strip())

    picture = []

    for _ in range(picture_count):
        picture_item = input()
        picture.append(picture_item)

    result = strokesRequired(picture)

    fptr.write(str(result) + '\n')

    fptr.close()
