// to reverse a string using pointer

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i;
    printf("Enter string: ");
    gets(s);

    char *p;
    p = s;

    char rev[100];
    int len = strlen(s);
    for (i=0; i<len; i++)
    {
        rev[i] = *(p + len - 1 - i);
    }
    rev[i] = '\0';

    printf("string copied to another: ");
    puts(rev);
}