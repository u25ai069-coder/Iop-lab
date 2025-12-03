// function to generate n no. fibonachi series

#include <stdio.h>

void fibo(int n);

int main()
{
    int n;
    printf("Enter Value of n: ");
    scanf("%d", &n);

    fibo(n);
}

void fibo(int n)
{
    int i,a1=0,a2=1,term;

    printf("%d\t%d\t",a1,a2);
    for (i=2;i<n;i++)
    {
        term = a1 + a2;
        a1 = a2;
        a2 = term;
        printf("%d\t", a2);
    }
}
