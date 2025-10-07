// to check if character is capital, small, digit or special

#include <stdio.h>

int main()
{
    char input;

    printf("Enter Character: "); 
    scanf("%c", &input);

    if (input > 64 && input < 91)
    {
        printf("Character is Capital");
    }
    else if (input > 96 && input < 123)
    {
        printf("Character is Lower");
    }
    else if (input > 47 && input < 58)
    {
        printf("Character is Digit");
    }
    else
    {
        printf("Character is Special character");
    }
}