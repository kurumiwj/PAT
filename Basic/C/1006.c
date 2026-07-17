//换个格式输出整数
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[30];
    int a, b, c, n, i;
    scanf("%d", &n);
    a = n / 100;
    n %= 100;
    b = n / 10;
    c = n % 10;
    for (i = 0; i < a; i++) {
        printf("B");
    }
    for (i = 0; i < b; i++) {
        printf("S");
    }
    for (i = 1; i <= c; i++) {
        printf("%d", i);
    }
    system("pause");
    return 0;
}