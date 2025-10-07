// to swap 2 variables without using 3rd variable

#include <stdio.h>

int main() 
{
    int num1, num2;

    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    num1 = num1 + num2;

    num2 = num1 - num2;

    num1 = num1 - num2;

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
}