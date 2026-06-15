#include <stdio.h>
int main() {
    int n, i = 1;
    printf("Enter a number to find all factors: ");
    scanf("%d", &n);
    while(i <= n) {
        if(n % i == 0) printf("All factors given below:\n %d ", i);
        i++;
    }
    return 0;
}
