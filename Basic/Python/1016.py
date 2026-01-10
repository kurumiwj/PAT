'''
@Author: kurumi
@Date: 2026-01-10 19:24:00
@Description: 1016 部分A+B
'''
def calculate(n: int, p: int):
  cnt: int = list(map(int, list(str(n)))).count(p)
  return int(str(p) * cnt) if cnt > 0 else 0

def main():
  a, pa, b, pb = map(int, input().split())
  print(calculate(a, pa) + calculate(b, pb))

if __name__ == '__main__':
  main()