#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, sum;
    float epsilon = 0.0001;

    printf("Enter three angles of a triangle:\n");

    scanf("%f %f %f", &a, &b, &c);

    sum = a + b + c;


    if (sum == 180) {
        printf("It's a valid triangle.\n");
    } else {
        printf("It isn't a valid triangle.\n");
    }

    return 0;
}
