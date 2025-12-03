// to copy array into another with reverse indexing using pointer

#include <stdio.h>

int main()
{
    int a[5];
    int i;
    printf("Enter array: ");
    for (i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }

    int *p;
    p = a;

    int b[5];
    for (i=0; i<5; i++)
    {
        b[4-i] = *a + i;
    }

    printf("Array copied to another: ");
    for (i=0; i<5; i++)
    {
        printf("%d ", b[i]);
    }
}