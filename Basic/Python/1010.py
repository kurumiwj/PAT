'''
@Author: kurumi
@Date: 2025-09-07
@Description: 1010 一元多项式求导
'''
from typing import List

def main():
    nums: List[int] = list(map(int, input().split()))
    isFirst: bool = True
    for i in range(0, len(nums), 2):
        if nums[i + 1] > 0:
            if isFirst:
                isFirst = False
            else:
                print(" ", end="")
            print(f"{nums[i] * nums[i + 1]} {nums[i + 1] - 1}", end="")  
    if isFirst:
        print("0 0")

if __name__ == "__main__":
    main()