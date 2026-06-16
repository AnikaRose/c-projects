#include <stdio.h>
int main() {
    int a, b, x, y;
    printf("Enter two numbers to find LCM: ");
    scanf("%d %d", &a, &b);
    x = a; y = b;
    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    printf("The LCM is: %d", (x*y)/a);
    return 0;
}
