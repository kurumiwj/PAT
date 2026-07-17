//继续(3n+1)猜想
#include <stdio.h>
#include <stdlib.h>

void sort(int a[], int n);

int main() {
    int k, i, j, x, count = 0;
    scanf("%d", &k);
    int a[k];
    for (i = 0; i < k; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < k; i++) {
        x = a[i];
        if (x != 0) {
            while (x != 1) {
                if (x % 2 == 0) {
                    x /= 2;
                } else {
                    x = (3 * x + 1) / 2;
                }
                for (j = 0; j < k; j++) {
                    if (a[j] == x) {
                        a[j] = 0;
                        break;
                    }
                }
            }
        }
    }
    for (i = 0; i < k; i++) {
        if (a[i] != 0) {
            count++;
        }
    }
    int b[count];
    j = 0;
    for (i = 0; i < k; i++) {
        if (a[i] != 0) {
            b[j] = a[i];
            j++;
            if (j == count) {
                break;
            }
        }
    }
    sort(b, count);
    for (i = 0; i < count; i++) {
        printf("%d", b[i]);
        if (i < count - 1) {
            printf(" ");
        }
    }
    printf("\n");
    system("pause");
    return 0;
}

void sort(int a[], int n) {         //冒泡排序
    int i, j, temp;
    for (j = 0; j < n; j++) {
        for (i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) {
                temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
            }
        }
    }
}