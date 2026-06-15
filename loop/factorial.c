#include <stdio.h>
int main() {
    int n, i = 1;
    long long f = 1;
    printf("Enter a number to calculate factorial of the number: ");
    scanf("%d", &n);
    while(i <= n) {
        f *= i;
        i++;
    }
    printf("The answer is: %lld", f);
    return 0;
}
