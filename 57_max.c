// to find max and 2nd max of 10 inputs using array

#include <stdio.h>

int main() 
{
    int n = 10, i, max, second_max;

    int num[n];
    printf("Enter 10 integers:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &num[i]);
    }

    if (num[0] > num[1]) 
    {
        max = num[0];
        second_max = num[1];
    } 
    else 
    {
        max = num[1];
        second_max = num[0];
    }

    for (i = 2; i < n; i++) 
    {
        if (num[i] > max) 
        {
            second_max = max;
            max = num[i];
        } 
        else if (num[i] > second_max && num[i] != max) 
        {
            second_max = num[i];
        }
    }

    printf("\nThe maximum number is: %d\n", max);
    printf("The second maximum number is: %d\n", second_max);
}