'''
@Author: kurumi
@Date: 2025-09-06
@Description: 1006 换个格式输出整数
'''
def toB(n: int) -> str:
    return "B" * n

def toS(n: int) -> str:
    return "S" * n

def toN(n: int) -> str:
    res: str = ""
    for i in range(n):
        res += str(i + 1)
    return res

def main():
    res: str = ""
    n: int = int(input())
    res += toB(n // 100)
    n %= 100
    res += toS(n // 10)
    n %= 10
    res += toN(n)
    print(res)

if __name__ == "__main__":
    main()