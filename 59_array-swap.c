// to read 10 inputs and perform swap

#include <stdio.h>

int main() 
{
    int array1[10], array2[10];
    int i, temp;

    printf("Enter 10 integer values for the first array:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter 10 integer values for the second array:\n");
    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &array2[i]);
    }

    printf("Before Swapping\n");
    printf("First Array:  ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", array1[i]);
    }
    printf("\nSecond Array: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    for (i = 0; i < 10; i++) 
    {
        temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    printf("After Swapping\n");
    printf("First Array:  ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", array1[i]);
    }
    printf("\nSecond Array: ");
    for (i = 0; i < 10; i++) 
    {
        printf("%d ", array2[i]);
    }
}