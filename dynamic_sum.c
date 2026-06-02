#include <stdio.h>
int main(){
    float a,b,sum;
    printf("Input a number:");
    scanf("%f",&a);
    printf("Input another number:");
    scanf("%f",&b);
    sum = a + b; 
    printf("The sum of %f and %f is: %.2f",a,b,sum);
    return 0;
}