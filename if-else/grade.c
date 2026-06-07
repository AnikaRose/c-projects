#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, percentage;
    char grade;

    // Input marks
    printf("Enter marks for Physics, Chemistry, Biology, Mathematics, and Computer:\n");
    scanf("%f %f %f %f %f", &physics, &chemistry, &biology, &mathematics, &computer);

    // Calculate total and percentage
    total = physics + chemistry + biology + mathematics + computer;
    percentage = (total / 500) * 100;

    // Determine grade
    if(percentage >= 90)
        grade = 'A';
    else if(percentage >= 80)
        grade = 'B';
    else if(percentage >= 70)
        grade = 'C';
    else if(percentage >= 60)
        grade = 'D';
    else if(percentage >= 40)
        grade = 'E';
    else
        grade = 'F';

    // Output results
    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    return 0;
}
