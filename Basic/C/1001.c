//害死人不偿命的(3n+1)猜想
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    if (n > 0 && n <= 1000) {
        while (n > 1) {
            if (n % 2 == 0) {
                n = n / 2;
                count++;
            } else {
                n = (3 * n + 1) / 2;
                count++;
            }
        }
    }
    printf("%d", count);
    system("pause");
    return 0;
}