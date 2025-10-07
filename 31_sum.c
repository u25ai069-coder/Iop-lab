// to find sum of individual digits of a number

#include <stdio.h>

int main()
{
    int num, sum = 0, a;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        a = num%10;
        sum = sum + a;
        num = num/10;
    }
    printf("Sum of digits = %d", sum); 
}