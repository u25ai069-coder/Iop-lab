// to return 1 if number is prime and 0 if number is 0

#include <stdio.h>

int prime(int n);

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    printf("Return value = %d", prime(a));
}

int prime(int n)
{
    int flag = 0;

    for (int i = 2; i < n && flag == 0; i++)
    {
        if (n%i == 0)
        {
            flag = 1;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}