// to see if no. is prime or composite

#include <stdio.h>

int main()
{
    int n,i,factors;

    printf("Enter number: ");
    scanf("%d", &n);
    for (i=1; i<=n; i++)
    {
        if (n%i == 0)
        {
            factors++;
        }
    }
    if (factors == 2)
    {
        printf("No is prime");
    }
    else
    {
        printf("No is composite");
    }
}