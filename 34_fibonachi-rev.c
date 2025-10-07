// to generate n terms of fibonachi series in rev and print sum

#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("Enter no of terms: ");
    scanf("%d", &n);
    int f[n];

    f[0] = 0, f[1] = 1;

    for (i=2;i<=n;i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    for (i=n-1;i>=0;i--)
    {
        printf("%d\t", f[i]);
        sum = sum + f[i];
    }
    printf("\nSum is %d",sum);
}