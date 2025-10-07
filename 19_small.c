// to read a character and find if its smallcase or not using conditional

#include <stdio.h>

int main()
{
    char c;

    printf("Enter character: ");
    scanf("%c", &c);

    (c >= 97 && c <= 122) ? printf("Character is lower case") : printf("Character is not lower case");
    
}