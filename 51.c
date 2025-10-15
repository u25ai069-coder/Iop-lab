// to print pattern

#include<stdio.h>

int main()
{
    int i, j, n;
    printf("Enter no of lines: ");
    scanf("%d", &n);

    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (j == i)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}