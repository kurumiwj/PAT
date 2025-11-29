'''
@Author: kurumi
@Date: 2025-11-29
@Description: 1014 福尔摩斯的约会
'''
from typing import Dict, List

def main():
    str1: str = input()
    str2: str = input()
    str3: str = input()
    str4: str = input()
    dayList: List[str] = ["MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"];
    day, hour, minute = '', '', ''
    position: int = 1
    for i in range(0, min(len(str1), len(str2))):
        if str1[i] == str2[i]:
            if position == 1 and str1[i] >= 'A' and str1[i] <= 'G':
                day = dayList[ord(str1[i]) - ord('A')]
                position = 2
            elif position == 2:
                if str1[i].isdigit():
                    hour = '0' + str1[i]
                    break
                elif str1[i] >= 'A' and str1[i] <= 'N':
                    hour = ord(str1[i]) - ord('A') + 10
                    break
    for i in range(0, min(len(str3), len(str4))):
        if str3[i] == str4[i] and str3[i].isalpha():
            minute = '0' + str(i) if i >= 0 and i < 10 else str(i)
    print(f'{day} {hour}:{minute}')

if __name__ == '__main__':
    main()