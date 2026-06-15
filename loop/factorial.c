#include <stdio.h>
int main() {
    int n, i = 1;
    long long f = 1;
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &n);
    if (n > 20) {
        printf("Factorial exceeds long long range.\n");
        return 1;
    }
    else{
    while(i <= n) {
        f *= i;
        i++;
    }
    printf("The answer is: %lld", f);
    }
    return 0;
}
