#include <stdio.h>
#include <math.h>

int main() {

    int n, first, last, digits;

    printf("Enter the number:\n");
    scanf("%d", &n);

    last = n % 10;
    digits = (int)log10(n);
    first = n / (int)pow(10, digits);

    n = n - first * (int)pow(10, digits);
    n = n - last;
    n = n + first;
    n = n + last * (int)pow(10, digits);

    printf("Swapping the first and last digit we get:\n%d", n);

    return 0;
}
