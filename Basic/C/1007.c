//素数对猜想
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int x);

int main() {
    int n, count = 0, i, j = 0, s = 0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) {
        if (isPrime(i) == 1) {
            count++;
        }
    }
    int a[count];
    for (i = 2; i <= n; i++) {
        if (isPrime(i) == 1) {
            a[j] = i;
            j++;
            if (j == count) {
                break;
            }
        }
    }
    for (j = 0; j < count - 1; j++) {
        if (a[j + 1] - a[j] == 2) {
            s++;
        }
    }
    printf("%d", s);
    system("pause");
    return 0;
}

int isPrime(int x) {
    int s = 1, i, flag = 1;
    if (x == 1) {
        s = 0;
    } else if (x >= 2) {
        for (i = 2; i <= sqrt(x); i++) {
            if (x % i == 0) {
                s = 0;
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            s = 1;
        }
    }
    return s;
}