// to calculate division from marks of 5 subjects

#include <stdio.h>

int main() 
{
    int sub1, sub2, sub3, sub4, sub5, total;
    float percentage;

    printf("Enter marks for Subject 1: ");
    scanf("%d", &sub1);

    printf("Enter marks for Subject 2: ");
    scanf("%d", &sub2);

    printf("Enter marks for Subject 3: ");
    scanf("%d", &sub3);

    printf("Enter marks for Subject 4: ");
    scanf("%d", &sub4);

    printf("Enter marks for Subject 5: ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    percentage = total / 5.0;

    printf("Total Marks Obtained: %d\n", total);
    printf("Percentage: %f%%\n", percentage);

    printf("Division: ");
    if (percentage >= 75) 
    {
        printf("First Division with Distinction");
    } 
    else if (percentage >= 60) 
    {
        printf("First Division");
    } 
    else if (percentage >= 50) 
    {
        printf("Second Division");
    } 
    else if (percentage >= 40) 
    {
        printf("Third Division");
    } 
    else 
    {
        printf("Fail");
    }
}