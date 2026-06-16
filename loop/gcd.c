#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers to find GCD: ");
    scanf("%d %d", &a, &b);
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    printf("The GCD is: %d", a);
    return 0;
}
