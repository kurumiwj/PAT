//成绩排名
#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
    char name[11];
    char number[11];
    int score;
} stu;

int main() {
    int n, i;
    int min = 0, max = 0;
    scanf("%d", &n);
    stu student[n];
    for (i = 0; i < n; i++) {
        scanf("%s %s %d", student[i].name, student[i].number, &student[i].score);
    }
    for (i = 1; i < n; i++) {
        if (student[min].score > student[i].score) {
            min = i;
        }
        if (student[max].score < student[i].score) {
            max = i;
        }
    }
    printf("%s %s\n%s %s\n", student[max].name, student[max].number, student[min].name, student[min].number);
    system("pause");
    return 0;
}
