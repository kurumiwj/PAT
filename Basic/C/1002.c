//写出这个数
#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[200], *s[5];
    int i = 0, sum = 0, j = 0, count = 0, t = 0, n;
    while ((a[i] = getchar()) != '\n') {
        i++;
    }
    a[i] = '\0';
    for (j = 0; j < i; j++) {
        sum = sum + a[j] - '0';
    }
    t = sum;
    while (t > 0) {
        t /= 10;
        count++;
    }
    j = 0;
    while (j < count) {
        n = sum % 10;
        sum /= 10;
        switch (n) {
            case 1:
                s[j] = "yi";
                break;
            case 2:
                s[j] = "er";
                break;
            case 3:
                s[j] = "san";
                break;
            case 4:
                s[j] = "si";
                break;
            case 5:
                s[j] = "wu";
                break;
            case 6:
                s[j] = "liu";
                break;
            case 7:
                s[j] = "qi";
                break;
            case 8:
                s[j] = "ba";
                break;
            case 9:
                s[j] = "jiu";
                break;
            case 0:
                s[j] = "ling";
                break;
        }
        j++;
    }
    for (j = count - 1; j >= 0; j--) {
        if (j > 0) {
            printf("%s ", s[j]);
        } else {
            printf("%s", s[j]);
        }
    }
    system("pause");
    return 0;
}