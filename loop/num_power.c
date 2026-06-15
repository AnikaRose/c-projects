#include <stdio.h>
int main() {
    int a, b, p = 1, i;
    printf("Enter the number and the power of the number: ");
    scanf("%d %d", &a, &b);
    for(i = 1; i <= b; i++) p *= a;
    printf("The answer is: %d", p);
    return 0;
}
