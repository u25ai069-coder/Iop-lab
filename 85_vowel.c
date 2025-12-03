// function to check if input is vowel or not

#include <stdio.h>

void vowel(char c);

int main ()
{
    char c;
    printf("Enter character: ");
    scanf("%c", &c);

    vowel(c);
}

void vowel(char c)
{
    if (c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("Character is Vowel");
    }
    else
    {
        printf("Character is not vowel");
    }
}