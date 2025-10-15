// to read 10 inputs and reverse the array

#include<stdio.h>

int main()
{
    int a[10], i, temp;

    printf("Enter values of array: \n");
    for (int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before switch: ");
    for (int i=0; i<10; i++)
    {
        printf("%d  ", a[i]);
    }

    for (int i=0; i<5; i++)
    {
        temp = a[i];
        a[i] = a[9-i];
        a[9-i] = temp;
    }

    printf("\nAfter switch: ");
    for (int i=0; i<10; i++)
    {
        printf("%d  ", a[i]);
    }
}