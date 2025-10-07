// to print squares of number

#include <stdio.h>

int main()
{
    int max;
    printf("Enter total no of square: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++)
    {
        printf("%d\t", i*i);
    }
}