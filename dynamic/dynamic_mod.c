#include <stdio.h>
int main(){
    int a,b,mod;
    printf("Input a number:");
    scanf("%d",&a);
    printf("Input another number:");
    scanf("%d",&b);
    mod = a % b;
    printf("The modulus is: %d",mod);
    return 0;
}
