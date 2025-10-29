// program to rotate array by n positions

#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Input array elements\n");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    int r;
    printf("Enter number by wich array should be rotated: ");
    scanf("%d", &r);

    printf("Before rotate: ");
    for (int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    int rotate[n];
    int temp;
    for (int i=0; i<n; i++)
    {
        if (i+r<n)
        {
            rotate[i] = a[i+r];
        }
        else
        {
            rotate[i] = a[(i+r)-n];
        }
    }

    printf("\nAfter rotate : ");
    for (int i=0; i<n; i++)
    {
        printf("%d ", rotate[i]);
    }
}