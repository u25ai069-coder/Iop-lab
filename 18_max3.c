// to read and calculate max of 3 no. using cond. operator (? :)

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("Maximum is %d", max);
}