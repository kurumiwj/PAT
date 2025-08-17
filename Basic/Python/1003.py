# -*- coding: utf-8 -*-
"""
@Author: kurumi
@Date: 2025-08-17 11:29:24
@Description: 1003 我要通过！
"""
from typing import List

# 字符串中必须仅有 P、 A、 T这三种字符
def checkAllChPAT(chs: List[str]) -> bool:
    return all(ch in list("PAT") for ch in chs)

# 包含PAT字符串
def containPAT(s: str) -> bool:
    return "PAT" in s

# 判断P、T数量是否一个
def isPTExistOne(s: str) -> bool:
    return s.count("P") == 1 and s.count("T") == 1

# 判断T是否在P右边且中间有其他字符
def TRightP(s: str) -> bool:
    return s.index("T") - s.index("P") > 1

# 判断字符串左右两边A是否奇偶一致
def bothSideOddOrEven(s: str) -> bool:
    indexP, indexT = s.index("P"), s.index("T")
    leftCnt, rightCnt = indexP, len(s) - indexT - 1
    return leftCnt % 2 == rightCnt % 2

def main():
    n: int = int(input())
    for i in range(n):
        if i != 0:
            print()
        s: str = input()
        if not checkAllChPAT(list(s)):
            print("NO", end="")
            continue
        if not isPTExistOne(s):
            print("NO", end="")
            continue
        if containPAT(s):
            print("YES", end="")
            continue
        if not TRightP(s):
            print("NO", end="")
            continue
        if not bothSideOddOrEven(s):
            print("NO", end="")
            continue
        print("YES", end="")

if __name__ == "__main__":
    main()