'''
@Author: kurumi
@Date: 2025-08-23 13:48
@Description: 1005 继续(3n+1)猜想
'''
from typing import List, Set

calNums: Set[int] = set()
keyNums: List[bool] = [False] * 200

def isOdd(n: int) -> bool:
    return n % 2 != 0

def isEven(n: int) -> bool:
    return n % 2 == 0

def Callatz(n: int):
    while n != 1:
        if n in calNums:
            keyNums[n] = False
            return
        calNums.add(n)
        if isOdd(n):
            n = (3 * n + 1) // 2
        else:
            n = n // 2

def main():
    n: int = int(input())
    res: List[int] = []
    nums: List[int] = list(map(int, input().split()))
    for num in nums:
        keyNums[num] = True
    for num in nums:
        Callatz(num)
    for num in nums:
        if keyNums[num]:
            res.append(num)    
    res.sort(reverse=True)
    print(" ".join(map(str, res)))    

if __name__ == "__main__":
    main()