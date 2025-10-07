// to output y using funtion in x and n

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, n;

    printf("Enter value of x: ");
    scanf("%d", &x);

    printf("Enter value of n: ");
    scanf("%d", &n);

    if (n == 1)
    {
        y = 1 + x;
    }
    else if (n == 2)
    {
        y = 1 + (x/n);
    }
    else if (n == 3)
    {
        double X = x, N = n;  
        y = 1 + pow(X,N);
    }
    else
    {
        y = 1 + (n*x);
    }

    printf("answer y = %d", y);
}