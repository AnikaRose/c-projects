#include <stdio.h>
int main() {
    int n, i = 1;
    long long f = 1;
    scanf("%d", &n);
    while(i <= n) {
        f *= i;
        i++;
    }
    printf("%lld", f);
    return 0;
}
