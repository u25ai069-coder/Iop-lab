// to count no of vowels in a given string using pointers

#include <stdio.h>
#include <string.h>

int vowel(char *c);

int main ()
{
    char s[100];
    int vow=0;
    printf("Enter string: ");
    gets(s);

    char *p = s;

    for (; *p != '\0'; p++)
    {
        if (vowel(p)==0)
        {
            vow++;
        }
    }

    printf("No of vowels: %d", vow);
}

int vowel(char *c)
{
    if (*c =='a' || *c == 'e' || *c == 'i' || *c == 'o' || *c == 'u')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}