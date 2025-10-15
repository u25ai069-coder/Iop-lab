// to read 10 numbers and add them

#include <stdio.h>

int main() 
{
    int numbers[10];
    int sum = 0;
    int i;

    printf("Enter 10 integer values:\n");

    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("The sum of the numbers is: %d\n", sum);
}