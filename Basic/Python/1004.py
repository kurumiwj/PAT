'''
@Author: kurumi
@Date: 2025-08-23 13:48
@Description: 1004 成绩排名
'''

class Student:
    def __init__(self, name: str, id: str, score: int):
        self._name = name
        self._id = id
        self._score = score

    @property
    def name(self) -> str:
        return self._name

    @property
    def id(self) -> str:
        return self._id

    @property
    def score(self) -> int:
        return self._score

    @name.setter
    def setName(self, name: str):
        self._name = name

    @id.setter
    def setId(self, id: str):
        self._id = id

    @score.setter
    def setScore(self, score: int):
        self._score = score

def main():
    n: int = int(input())
    maxScore, minScore = -1, 101
    minStu: Student = None
    maxStu: Student = None
    for i in range(n):
        args: list = input().split()
        score: int = int(args[2])
        if score > maxScore:
            maxScore = score
            maxStu = Student(args[0], args[1], score)
        if score < minScore:
            minScore = score
            minStu = Student(args[0], args[1], score)
    print(f"{maxStu.name} {maxStu.id}")
    print(f"{minStu.name} {minStu.id}")

if __name__ == "__main__":
    main()