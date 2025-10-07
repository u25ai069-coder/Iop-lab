// to check if a number is palindrom or not

#include <stdio.h>

int main()
{
    int num, temp, rev = 0, a;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;

    while (num > 0)
    {
        a = num%10;
        rev = rev*10 + a;
        num = num/10;
    }
    if (rev == temp)
    {
        printf("Number %d is palindrom", temp);
    }
    else
    {
        printf("Number %d is not palindrom", temp);
    }
}