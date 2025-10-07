// to make simple calculator using switch case

#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, ans;

    printf("Enter operator: ");
    scanf("%c", &operator);
    printf("Enter number 1: ");
    scanf("%f", &num1);
    printf("Enter number 2: ");
    scanf("%f", &num2);

    switch(operator)
    {
        case '+':
            ans = num1 + num2;
            printf("%f + %f = %f", num1, num2, ans);
            break;
    
        case '-':
            ans = num1 - num2;
            printf("%f - %f = %f", num1, num2, ans);
            break;

        case '*':
            ans = num1 * num2;
            printf("%f * %f = %f", num1, num2, ans);
            break;

        case '/':
            ans = num1 / num2;
            printf("%f / %f = %f", num1, num2, ans);
            break;
    }
}