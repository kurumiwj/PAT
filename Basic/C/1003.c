//我要通过!
#include <stdio.h>
#include <stdlib.h>

int letter_count(char s[], char m);         //判断字符在字符串中出现的次数

int letter_index(char s[], char m);         //判断字符在字符串中出现的位置
int AbeforeP(char s[]);

int AafterT(char s[]);

int AbetweenPandT(char s[]);

int main() {
    int n, i, j, flag = 0, count1 = 0, count2 = 0, count3 = 0;
    char *s[100], m1, m2, m3;
    scanf("%d", &n);
    if (n > 0 && n < 10) {
        for (i = 0; i < n; i++) {
            s[i] = (char *) malloc(100 * sizeof(char));
        }
        for (i = 0; i < n; i++) {
            scanf("%s", s[i]);
        }
        for (i = 0; i < n; i++) {
            flag = 0;
            for (j = 0; *(s[i] + j) != '\0'; j++) {
                if (*(s[i] + j) != 'P' && *(s[i] + j) != 'A' && *(s[i] + j) != 'T') {
                    printf("NO\n");
                    flag = 1;
                    break;
                }
            }
            if (flag == 1) {
                continue;
            }
            m1 = 'P';
            m2 = 'T';
            m3 = 'A';
            if (letter_count(s[i], m1) == 0 || letter_count(s[i], m2) == 0 ||
                letter_count(s[i], m3) == 0) {        //只要PAT三个字母当中有一个数量为0则为No
                printf("NO\n");
                continue;
            }
            if (letter_count(s[i], m1) > 1 || letter_count(s[i], m2) > 1) {         //如果P和T出现的次数超过一次则为No
                printf("NO\n");
                continue;
            }
            if (letter_index(s[i], m1) > letter_index(s[i], m2)) {          //如果P出现在T之后则为No
                printf("NO\n");
                continue;
            } else {
                if (letter_index(s[i], m2) - letter_index(s[i], m1) == 1) {         //如果P和T紧挨着则为No
                    printf("NO\n");
                } else {
                    count1 = AbeforeP(s[i]);
                    count2 = AbetweenPandT(s[i]);
                    count3 = AafterT(s[i]);
                    if (count1 * count2 == count3) {
                        printf("YES\n");
                    } else {
                        printf("NO\n");
                    }
                }
            }
        }
    }
    for (i = 0; i < n; i++) {
        free(s[i]);
    }
    system("pause");
    return 0;
}

int letter_count(char s[], char m) {
    int i = 0, count = 0;
    while (s[i] != '\0') {
        if (s[i] == m) {
            count++;
        }
        i++;
    }
    return count;
}

int letter_index(char s[], char m) {
    int i = 0, x = -1;
    while (s[i] != '\0') {
        if (s[i] == m) {
            x = i;
            break;
        }
        i++;
    }
    return x;
}

int AbeforeP(char s[]) {
    int i = 0, count = 0;
    for (i = 0; s[i] != 'P'; i++) {
        count++;
    }
    return count;
}

int AafterT(char s[]) {
    int i = 0, j = 0, count = 0;
    for (i = 0; s[i] != 'T'; i++) { ; }
    for (j = i + 1; s[j] != '\0'; j++) {
        count++;
    }
    return count;
}

int AbetweenPandT(char s[]) {
    int i = 0, j = 0, count = 0;
    for (i = 0; s[i] != 'P'; i++) { ; }
    for (j = i + 1; s[j] != 'T'; j++) {
        count++;
    }
    return count;
}