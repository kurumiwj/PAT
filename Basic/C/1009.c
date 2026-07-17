//Ëµ·´»°
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100][100];
    int i = 0;
    while (scanf("%s", s[i]) != EOF) {
        i++;
    }
    for (i = i - 1; i > 0; i--) {
        printf("%s ", s[i]);
    }
    printf("%s\n", s[0]);
    system("pause");
    return 0;
}