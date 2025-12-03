// to count length of a string using pointer

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter line: ");
    gets(str);

    int len=0, i=0, space=0;
    do
    {
        len++;
        if (*(str + i) == ' ')
        {
            space++;
        }
        i++;
    } while (*(str + i) != '\0');

    printf("Length of string with space = %d\n", len);
    printf("Length of string without space = %d", len - space);
}