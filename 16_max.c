// to read and calculate maximum of 3 numbers

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    printf("Enter number 3: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Number 1 is greatest");
        }
        else
        {
            printf("Number 3 is greatest");
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("Number 2 is greatest");
        }
        else
        {
            printf("Number 3 is greatest");
        }
    }
}