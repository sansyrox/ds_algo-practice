#!/bin/python3

import math
import os
import random
import re
import sys

#  int number = stoi(n);
#     if(number/10==0){
#         return number;
#     }

#     // Rec Case
#     number = number%9;
#     if(!number){
#         number = 9;
#     }
#     number = number * k;
#     k = 1;
#     string x = to_string(number);
#     return superDigit(x,k);
# Complete the superDigit function below.
def superDigit(n, k):
    n = int(n)
    if(n/10 == 0):
        return n

    # Rec Case
    n = n % 9
    if n==0 :
        n=9
    
    n = n*k
    k=1
    x = str(n)
    y = superDigit(x,k)
    return y


if __name__ == '__main__':
    # fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = nk[0]

    k = int(nk[1])

    result = superDigit(n, k)

    print(result)
