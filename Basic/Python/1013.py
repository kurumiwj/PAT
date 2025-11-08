'''
@Author: kurumi
@Date: 2025-11-08
@Description: 1013 数素数
'''
from typing import List

MAX: int = 110000

def countPrimes(primes: List[bool], m: int, n: int):
    cnt, start, end = 0, 0, 0
    primes[1], primes[2] = False, True
    for i in range(2, len(primes)):
        if primes[i] == True:
            cnt += 1
            if cnt == m:
                start = i
            if cnt == n:
                end = i
                break
            j: int = i
            while i * j < MAX:
                primes[i * j] = False
                j += 1
    return (start, end)

def main():
    [m, n] = map(int, input().split())
    rowMax, cnt = 10, 0
    primes: List[bool] = [True] * MAX
    (start, end) = countPrimes(primes, m, n)
    for i in range(start, end + 1):
        if primes[i]:
            if cnt % 10 == 0 and cnt != 0:
                print()
            elif cnt % 10 != 0:
                print(" ", end="")
            cnt += 1
            print(i, end="")

if __name__ == '__main__':
    main()