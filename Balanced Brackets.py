#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the isBalanced function below.
def isBalanced(s):
    ar=[]
    for i in range(0,len(s)):
        if s[i] in ['(','{','[']:
            ar.append(s[i])
        else:
            if ar==[]:
                return "NO"
            else:
                if s[i] =="}" :
                    if ar[-1]=="{":
                        ar.pop(len(ar)-1)
                    else:
                        return "NO"
                if s[i] ==")" :
                    if ar[-1]=="(":
                        ar.pop(len(ar)-1)
                    else:
                        return "NO"
                if s[i] =="]" :
                    if ar[-1]=="[":
                        ar.pop(len(ar)-1)
                    else:
                        return "NO"
        print(ar)
    if len(ar)==0:

        return "YES"
    return "NO"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        s = input()

        result = isBalanced(s)

        fptr.write(result + '\n')

    fptr.close()
