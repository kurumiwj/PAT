'''
@Author: kurumi
@Date: 2025-10-25
@Description: 1011 A+B 和 C
'''
def main():
    n: int = int(input())
    for i in range(1, n + 1):
        a, b, c = map(int, input().split())
        print(f'Case #{i}: {"true" if a + b > c else "false"}')

if __name__ == '__main__':
    main()