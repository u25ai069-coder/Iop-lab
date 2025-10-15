// to read 2 array and store sum in 3rd

#include <stdio.h>

int main() 
{
    int array1[10], array2[10], sum_array[10];
    int i;

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

    for (i = 0; i < 10; i++) 
    {
        sum_array[i] = array1[i] + array2[i];
    }

    printf("\nThe sum of the two arrays is:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%d\t", sum_array[i]);
    }
}