// a function to flip last n digits of a number 

#include <stdio.h>

int power(int base, int power);
int flip(int *p,int n);

int main()
{
    int a, n;
    printf("Enter the no and value of n: ");
    scanf("%d %d", &a, &n);

    flip(&a, n);

    printf("No after flip: %d", a);
}

int power(int base, int power)
{
    int output=1;
    for (int i=0; i<power; i++)
    {
        output *= base;
    }

    return output;
}

int flip(int *p,int n)
{
    int digit[n];
    
    for (int i=0; i<n; i++)
    {
        digit[i] = *p % 10;
        *p /= 10;
    }

    *p *= power(10, n);
    for (int i=0; i<n; i++)
    {
        *p += (digit[i] * power(10, n-i-1));
    }
}