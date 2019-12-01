#!/bin/python3
import os
import sys

def getStack(h):
    i=len(h)-1
    s=[0]
    while i>=0:
        s.append(s[-1]+h[i])
        i=i-1
    return s


#
# Complete the equalStacks function below.
#
def equalStacks(h1, h2, h3):
    s1=getStack(h1)
    s2=getStack(h2)
    s3=getStack(h3)
    #print(s1,s2,s3)
    ans=set(s1).intersection(set(s2).intersection(set(s3)))
    return max(ans)
        
    #
    # Write your code here.
    #

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n1N2N3 = input().split()

    n1 = int(n1N2N3[0])

    n2 = int(n1N2N3[1])

    n3 = int(n1N2N3[2])

    h1 = list(map(int, input().rstrip().split()))

    h2 = list(map(int, input().rstrip().split()))

    h3 = list(map(int, input().rstrip().split()))

    result = equalStacks(h1, h2, h3)

    fptr.write(str(result) + '\n')

    fptr.close()
