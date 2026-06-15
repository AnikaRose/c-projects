#include <stdio.h>

int main() {
    int n, i = 1;
    long long f = 1;

    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    if (n > 20) {
        printf("Factorial exceeds long long range.\n");
        return 1;
    }

    while (i <= n) {
        f *= i;
        i++;
    }

    printf("The answer is: %lld\n", f);

    return 0;
}
