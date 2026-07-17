#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[1000];
    int n, i = 0, j, A1 = 0, count1 = 0, A2 = 0, count2 = 0, flag2 = 1, A3 = 0, count4 = 0, A5,
            count5 = 0;
    double A4 = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < n; j++) {
        if (a[j] % 5 == 0 && a[j] % 2 == 0) {
            A1 += a[j];
            count1++;
        }
    }
    if (count1 == 0) {
        printf("N ");
    } else {
        printf("%d ", A1);
    }
    for (j = 0; j < n; j++) {
        if (a[j] % 5 == 1) {
            A2 = A2 + flag2 * a[j];
            flag2 = flag2 * (-1);
            count2++;
        }
    }
    if (count2 == 0) {
        printf("N ");
    } else {
        printf("%d ", A2);
    }
    for (j = 0; j < n; j++) {
        if (a[j] % 5 == 2) {
            A3++;
        }
    }
    if (A3 == 0) {
        printf("N ");
    } else {
        printf("%d ", A3);
    }
    for (j = 0; j < n; j++) {
        if (a[j] % 5 == 3) {
            A4 += a[j];
            count4++;
        }
    }
    if (count4 == 0) {
        printf("N ");
    } else {
        printf("%.1lf ", A4 / count4);
    }
    for (j = 0; j < n; j++) {
        if (a[j] % 5 == 4) {
            A5 = a[j];
            count5++;
            break;
        }
    }
    for (j = j + 1; j < n; j++) {
        if (a[j] % 5 == 4) {
            if (A5 < a[j]) {
                A5 = a[j];
                count5++;
            }
        }
    }
    if (count5 == 0) {
        printf("N");
    } else {
        printf("%d", A5);
    }
    system("pause");
    return 0;
}