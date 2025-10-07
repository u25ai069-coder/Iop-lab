// to find reverse

#include <stdio.h>

int main()
{
    int num, rev = 0, a;
    printf("Enter number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        a = num%10;
        rev = rev*10 + a;
        num = num/10;
    }
    printf("Reverse is %d", rev);
}