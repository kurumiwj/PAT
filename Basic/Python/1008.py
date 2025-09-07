'''
@Author: kurumi
@Date: 2025-09-07
@Description: 1008 数组元素循环右移问题
'''
from typing import List

def main():
    n, m = map(int, input().split())
    nums: List[int] = list(map(str, input().split()))
    res: List[int] = []
    for i in range(n - m % n, n):
        res.append(nums[i])
    for i in range(n - m % n):
        res.append(nums[i])
    print(" ".join(res))

if __name__ == "__main__":
    main()