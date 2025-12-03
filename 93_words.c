// to count words using pointer

#include <stdio.h>

int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);

    char *p = s;
    int words=1;

    for (; *p != '\0'; p++)
    {
        if (*p == ' ')
        {
            while (*p == ' ')
            {
                p++;
            }
            words++;
        }
    }

    printf("no of Words = %d", words);
}