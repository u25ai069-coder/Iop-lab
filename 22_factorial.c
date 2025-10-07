// to calculate factorial of a given number

#include <stdio.h>

int main()
{
    int num, i, factorial;
    factorial = 1;

    printf("Enter number: ");
    scanf("%d", &num);

    for (i = 1; i < num + 1; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial = %d", factorial);
}