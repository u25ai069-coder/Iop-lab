// to check if a number is prime or not

#include <stdio.h>

int main()
{
    int num, flag = 0;
    printf("Enter no: ");
    scanf("%d", &num);

    for (int i = 2; i < num && flag == 0; i++)
    {
        if (num%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        printf("Number %d is prime", num);
    }
    else
    {
        printf("Number %d is not prime", num);
    }
}