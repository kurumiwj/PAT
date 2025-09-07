'''
@Author: kurumi
@Date: 2025-09-07
@Description: 1007 素数对猜想
'''
from typing import List

def initPrimes(primes: List[bool], n: int):
    primes[0], primes[1] = False, False
    for i in range(2, n):
        j: int = i
        while i * j <= n:
            primes[i * j] = False
            j += 1

def countPrimes(primes: List[bool]) -> int:
    cnt: int = 0
    for i in range(2, len(primes)):
        if primes[i] == True and primes[i - 2] == True:
            cnt += 1
    return cnt

def main():
    n: int = int(input())
    primes: List[bool] = [True] * (n + 1)
    initPrimes(primes, n)
    print(countPrimes(primes))

if __name__ == "__main__":
    main()