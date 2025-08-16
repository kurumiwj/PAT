# -*- coding: utf-8 -*-
"""
@Author: kurumi
@Date: 2025-08-16 20:11:28
@Description: 1002 写出这个数
"""

def calEachNumSum(n: int) -> int:
    res: int = 0
    while n > 0:
        res += n % 10
        n //= 10
    return res

def readNumInCN(n: int) -> str:
    numMap: dict = {
        "1": "yi",
        "2": "er",
        "3": "san",
        "4": "si",
        "5": "wu",
        "6": "liu",
        "7": "qi",
        "8": "ba",
        "9": "jiu",
        "0": "ling"
    }
    return " ".join(list(map(lambda x: numMap.get(x), list(str(n)))))

def main():
    n: int = int(input())
    calSum: int = calEachNumSum(n)
    print(readNumInCN(calSum))

if __name__ == "__main__":
    main()