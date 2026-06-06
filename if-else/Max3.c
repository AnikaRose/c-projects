#include<stdio.h>
int main(){
    int a, b,c;
    printf("Input 1st number:\n",a);
    scanf("%d", &a);
    printf("Input 2nd number:\n",b);
    scanf("%d", &b);
    printf("Input 3rd number:\n",b);
    scanf("%d", &c);
    if(a>b && a>c){
        printf("%d is maximum.",a);
    }
    else if(b>a && b>c){
        printf("%d is maximum.",b);
    }
    else{
         printf("%d is maximum.",c);
    }
   return 0;
    }


