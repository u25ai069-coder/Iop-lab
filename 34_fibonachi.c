// to generate n terms of fibonachi series

#include <stdio.h>

int main()
{
    int i,a1=0,a2=1,term,n;

    printf("Enter no. of terns: ");
    scanf("%d", &n);

    printf("%d\t%d\t",a1,a2);
    for (i=2;i<n;i++)
    {
        term = a1 + a2;
        a1 = a2;
        a2 = term;
        printf("%d\t", a2);
    }
}