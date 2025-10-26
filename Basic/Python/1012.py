'''
@Author: kurumi
@Date: 2025-10-26
@Description: 1012 数字分类
'''
def main():
    [n, *nums] = map(int, input().split())
    a1, a2, a3, sum4, cnt4, max5 = 0, 0, 0, 0, 0, 0
    a2Exist, flag = False, 1;
    for num in nums:
        if num % 5 == 0 and num % 2 == 0:
            a1 += num
        elif num % 5 == 1:
            a2Exist = True
            a2 += flag * num
            flag *= -1
        elif num % 5 == 2:
            a3 += 1
        elif num % 5 == 3:
            sum4 += num
            cnt4 += 1
        elif num % 5 == 4 and num > max5:
            max5 = num
    print(f'{"N" if a1 == 0 else a1} {a2 if a2Exist else "N"} {"N" if a3 == 0 else a3} {"N" if cnt4 == 0 else "%.1f" % (sum4 / cnt4)} {"N" if max5 == 0 else max5}')

if __name__ == '__main__':
    main()