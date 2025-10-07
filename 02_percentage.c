// to calculate total and percentage of 5 subjects

#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;

    printf("marks of subject 1 ");
    scanf("%d", &sub1);

    printf("marks of subject 2 ");
    scanf("%d", &sub2);

    printf("marks of subject 3 ");
    scanf("%d", &sub3);

    printf("marks of subject 4 ");
    scanf("%d", &sub4);

    printf("marks of subject 5 ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %f", percentage);
}