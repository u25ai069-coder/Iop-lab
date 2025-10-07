// to check if a number is armstrong or not

#include <stdio.h>

int main()
{
    int num, sum = 0, a;
    printf("Enter number: ");
    scanf("%d", &num);
    int temp = num;

    while (num > 0)
    {
        a = num%10;
        sum = sum + (a*a*a);
        num = num/10;
    }
    if (sum == temp)
    {
        printf("number %d is armstrong", temp);
    }
    else
    {
        printf("number %d is not armstrong", temp);
    }
}