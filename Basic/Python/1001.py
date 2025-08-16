# -*- coding: utf-8 -*-
"""
Created on Sat Aug 16 13:00:01 2025

@Author: kurumi
@Description: 1001 害死人不偿命的(3n+1)猜想
"""

def isOdd(n: int) -> bool:
    return n % 2 != 0

def isEven(n: int) -> bool:
    return n % 2 == 0

def Callatz(n: int) -> int:
    step: int = 0
    while n != 1:
        if isOdd(n):
            n = (3 * n + 1) // 2
        else:
            n = n // 2
        step += 1
    return step

def main():
    n: int = int(input())
    print(Callatz(n))

if __name__ == "__main__":
    main()
