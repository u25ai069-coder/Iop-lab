// generate pattern

#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Enter no of lines: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++)
    {
        for (j=0;j<n-i;j++)
        {
            printf(" ");
        }

        for (j=1;j<=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}