from math import *


if __name__ == '__main__' :
    t = int(input())
    while t > 0:
        n = int(input())
        F = [0]*(n+1)
        F[0] = 1
        for i in range(1,n+1):
            for j in range(i):
                F[i] += F[j]*F[i-j-1]
        print(F[n])
        t -= 1 
    