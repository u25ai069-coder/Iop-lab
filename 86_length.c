// function to read line of text and find length of string

#include <stdio.h>

int strlen(char s[]);

int main()
{
    char str[1000000];

    printf("Enter line: ");
    gets(str);

    printf("Length of string = %d", strlen(str));
}

int strlen(char s[])
{
    int len=0, i=0;
    do
    {
        len++;
        i++;
    } while (s[i] != '\0');
    
    return len;
}