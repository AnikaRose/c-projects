#include <stdio.h>
int main() {
    int n, d, i, c;
    printf("Enter an integer number:\n");
    scanf("%d", &n);
    for(i=0;i<=9;i++) {
        int t = n, c = 0;
        while(t != 0) {
            d = t % 10;
            if(d == i) c++;
            t /= 10;
        }
        printf("Frequency of the number is shown below:\n%d = %d\n", i, c);
    }
    return 0;
}
