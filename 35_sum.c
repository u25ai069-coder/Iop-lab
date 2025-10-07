// to find sum of individual digits of a number until single digit

#include <stdio.h>

int main()
{
    int num, sum, a;
    printf("Enter number: ");
    scanf("%d", &num);

    do
    {
        sum = 0;
        while (num > 0)
        {
            a = num%10;
            sum = sum + a;
            num = num/10;
        }
        num = sum;
    } while (sum > 10);
    
    printf("Sum of digits = %d", sum);
}