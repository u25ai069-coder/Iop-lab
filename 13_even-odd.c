// to check whether a given no is even or odd

#include <stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}