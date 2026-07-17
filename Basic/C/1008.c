//数组元素循环右移问题
#include <stdio.h>
#include <stdlib.h>

//投机取巧的方法，直接从移动的地方开始打印，数组本身并没有变化(尽量不使用)
/*
int main() {
    int n, m, i;
    scanf("%d %d", &n, &m);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    m = m % n;
    if (m != 0) {
        for (i = n - m; i < n; i++) {
            printf("%d ", a[i]);
        }
        for (i = 0; i < n - m; i++) {
            printf("%d%s", a[i], i - (n - m) + 1 ? " " : "\n");
        }
    } else {
        for (i = 0; i < n; i++) {
            printf("%d%s", a[i], i - n + 1 ? " " : "\n");
        }
    }
    system("pause");
    return 0;
}
*/
//先倒序然后利用指针将两部分分别倒序
void swap(int *p, int *q);

int main() {
    int n, m, i;
    int *p, *q;
    scanf("%d %d", &n, &m);
    int a[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    m = m % n;
    p = a;
    q = &a[n - 1];
    swap(p, q);         //先将整个数组倒序
    p = a;
    q = &a[n - 1 - (n - m)];
    swap(p, q);         //将前半部分倒序
    p = &a[m];
    q = &a[n - 1];
    swap(p, q);         //将后半部分倒序
    for (i = 0; i < n; i++) {
        printf("%d%s", a[i], i + 1 - n ? " " : "\n");
    }
    system("pause");
    return 0;
}

void swap(int *p, int *q) {
    int temp;
    while (p < q) {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
}