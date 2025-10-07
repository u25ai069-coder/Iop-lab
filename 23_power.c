// to calculate power without using <math.h>

#include <stdio.h>

int main()
{
    int base, power, i, value;

    printf("Enter value of base: ");
    scanf("%d", &base);

    value = base;

    printf("Enter value of exponent: ");
    scanf("%d", &power);

    for (i = 1; i < power; i++)
    {
        value = value * base;
    }

    printf("Answer = %d", value);
}