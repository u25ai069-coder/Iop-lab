// function that reads an arrays and finds out its maximum

#include <stdio.h>

int max(int a[], int size);

int main()
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int num[n];
    printf("Enter array elements: \n");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }

    printf("Maximum value: %d", max(num, n));
}

int max(int a[], int size)
{
    int max=0;
    for (int i=0; i<size; i++)
    {
        max = (max>a[i]) ? max : a[i];
    }

    return max;
}