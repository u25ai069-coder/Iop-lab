// to find max of a given list of n integers using pointer

#include <stdio.h>

int main()
{
    int a[10];
    printf("Enter array: ");
    int i;
    for (i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    int *max;

    max = a;

    for (i=1; i<10; i++)
    {
        max = (a[i]>*max) ? &a[i] : max;
    }

    printf("Max = %d", *max);
}