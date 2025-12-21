'''
@Author: kurumi
@Date: 2025-12-21
@Description: 1015 德才论
'''
from typing import List

class Student:
    def __init__(self, id: str, moral: int, ability: int):
        self.id = id
        self.moral = moral
        self.ability = ability
        self.total = moral + ability

    def __str__(self):
        return f'{self.id} {self.moral} {self.ability}'

    def isAdmitted(self, l: int) -> bool:
        return self.moral >= l and self.ability >= l

    def isMoralAndAbility(self, h: int) -> bool:
        return self.moral >= h and self.ability >= h

    def isMoralMoreThanAbilityH(self, h: int) -> bool:
        return self.moral >= h and self.ability < h

    def isMoralMoreThanAbilityL(self, h: int) -> bool:
        return self.moral < h and self.ability < h and self.moral >= self.ability

    def compare(self, stu) -> bool:
        if self.total == stu.total:
            return self.moral > stu.moral if self.moral != stu.moral else self.id < stu.id
        return self.total > stu.total

def main():
    n, l, h = map(int, input().split())
    moralAndAbilityStudents: List[Student] = list()
    moralMoreThanAbilityHStudents: List[Student] = list()
    moralMoreThanAbilityLStudents: List[Student] = list()
    otherStudents: List[Student] = list()
    cnt: int = 0
    for i in range(n):
        id, moral, ability = input().split()
        stu: Student = Student(id, int(moral), int(ability))
        if stu.isAdmitted(l):
            cnt += 1
            if stu.isMoralAndAbility(h):
                moralAndAbilityStudents.append(stu)
            elif stu.isMoralMoreThanAbilityH(h):
                moralMoreThanAbilityHStudents.append(stu)
            elif stu.isMoralMoreThanAbilityL(h):
                moralMoreThanAbilityLStudents.append(stu)
            else:
                otherStudents.append(stu)
    moralAndAbilityStudents.sort(key = lambda stu: (-stu.total, -stu.moral, stu.id))
    moralMoreThanAbilityHStudents.sort(key = lambda stu: (-stu.total, -stu.moral, stu.id))
    moralMoreThanAbilityLStudents.sort(key = lambda stu: (-stu.total, -stu.moral, stu.id))
    otherStudents.sort(key = lambda stu: (-stu.total, -stu.moral, stu.id))

    print(cnt)
    for stu in moralAndAbilityStudents:
        print(stu)
    for stu in moralMoreThanAbilityHStudents:
        print(stu)
    for stu in moralMoreThanAbilityLStudents:
        print(stu)
    for stu in otherStudents:
        print(stu)

if __name__ == '__main__':
    main()