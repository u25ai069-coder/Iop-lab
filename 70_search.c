// to search perticular element in an array

#include<stdio.h>

int main()
{
    int a[10], n;

    printf("Enter array elements: \n");
    for (int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &n);

    for (int i=0; i<10; i++)
    {
        if (a[i] == n)
        {
            printf("Element found at pos %d\n", i+1);
        }
    }    
}