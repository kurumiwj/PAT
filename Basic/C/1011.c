//A+B和C
#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b, c;
    int t, i;
    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%lld %lld %lld", &a, &b, &c);
        if (a + b > c) {
            printf("Case #%d: true\n", i + 1);
        }else{
            printf("Case #%d: false\n", i + 1);
        }
    }
    system("pause");
    return 0;
}