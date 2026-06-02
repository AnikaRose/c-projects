
#include <stdio.h>
int main(){
    int a,b,c,d,e,sum;
    float result;
    printf("Enter a value of a:\n");
    scanf("%d",&a);
     printf("Enter a value of b:\n");
    scanf("%d",&b);
     printf("Enter a value of c:\n");
    scanf("%d",&c);
     printf("Enter a value of d:\n");
    scanf("%d",&d);
     printf("Enter a value of e:\n");
    scanf("%d",&e);


    sum = a+b+c+d+e;
    result = (float)sum/5;
    printf("RESULT=\t %.2f",result);
    }
