#include<iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main() {
    int m, n, i = 2, j = 0, cnt = 0;
    scanf("%d %d", &m, &n);
    vector<int> v;
    while (cnt < n) {
        if (isPrime(i)) {
            cnt++;
            if (cnt >= m) v.push_back(i);
        }
        i++;
    }
    cnt = 0;
    for (int k = 0; k < v.size(); k++) {
        cnt++;
        printf("%d", v[k]);
        if (cnt % 10 == 0)printf("\n");
        else printf("%s", k < v.size() - 1 ? " " : "");
    }
    system("pause");
    return 0;
}

bool isPrime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)return false;
    }
    return true;
}