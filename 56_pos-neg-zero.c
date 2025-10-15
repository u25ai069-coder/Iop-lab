// to read 10 num and find +ve, -ve, 0 

#include <stdio.h>

int main()
{
    int num[10];
    int positive = 0;
    int negative = 0;
    int zero = 0;
    int i;

    printf("Enter 10 integer numbers:\n");

    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &num[i]);

        if (num[i] > 0) 
        {
            positive++;
        } 
        else if (num[i] < 0) 
        {
            negative++;
        } 
        else 
        {
            zero++;
        }
    }

    printf("Total Positive numbers: %d\n", positive);
    printf("Total Negative numbers: %d\n", negative);
    printf("Total Zeroes: %d\n", zero);
}