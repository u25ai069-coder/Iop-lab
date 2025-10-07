// to print sum of (1/1! + 2/2! + 3/3! ...)

#include <stdio.h>

int main()
{
    int num, fact;
    float sum = 0;

    printf("Enter total number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact = fact * j;
        }
        sum = sum + ((i*1.0)/fact);
    }
    printf("Sum = %f", sum);
}