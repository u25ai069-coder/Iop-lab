// create in-built functions like strcpy, strcmp, strcat, strrev

#include <stdio.h>

int strlength(char *s);
void strcopy(char *c, char *p);
int strcomp(char *s1,char *s2);
void strconcat(char *s1, char *s2);
void strrev(char *s);

int main()
{
    char c;
    char str1[100], str2[100];
    printf("A: copy\nB: compare\nC: concat\nD: reverse\n");
    printf("Choose mode: ");
    scanf("%c", &c);
    getchar();

    switch (c)
    {
        case 'A' :  printf("Enter string to copy: ");
                    gets(str1);
                    strcopy(str2, str1);
                    printf("Copied string: ");
                    puts(str2);
                    break;

        case 'B' :  printf("Enter string 1: ");
                    gets(str1);
                    printf("Enter string 2: ");
                    gets(str2);
                    printf("result of compare: %d", strcomp(str1, str2));
                    break;
        
        case 'C' :  printf("Enter string 1: ");
                    gets(str1);
                    printf("Enter string 2: ");
                    gets(str2);
                    strconcat(str1, str2);
                    printf("concated string: ");
                    puts(str1);
                    break;

        case 'D' :  printf("Enter string to reverse: ");
                    gets(str1);
                    strrev(str1);
                    printf("Reversed string: ");
                    puts(str1);
                    break;

        default :   printf("Invalid input");
                    break;
    }
}

int strlength(char *s)
{
    int len=0;
    for (int i=0; *(s+i) != '\0'; i++)
    {
        len++;
    }

    return len;
}

void strcopy(char *c, char *p)
{
    int i, n = strlength(p);

    for (i=0; i<n; i++)
    {
        *(c+i) = *(p+i);
    }
    *(c+i) = '\0';
}

int strcomp(char *s1, char *s2)
{
    for (int i = 0; ; i++)
    {
        if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
        {
            if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
            {
                return 0;
            }
            else
            {
                return (strlength(s1)>strlength(s2)) ? 1 : -1 ;
            }
        }
        else
        {
            if (*(s1 + i) != *(s2 + i))
            {
                return *(s1 + i) - *(s2 + i);
            }
        }
    }
}

void strconcat(char *s1, char *s2)
{
    s1 = s1 + strlength(s1);
    *s1 = ' ';
    s1++;

    for (int i=0, n=strlength(s2); i<=n; i++)
    {
        *(s1 + i) = *(s2 + i);
    }
}

void strrev(char *s)
{
    int n = strlength(s);
    char temp;
    int i;
    for (i=0; i<n/2; i++)
    {
        temp = *(s+i);
        *(s+i) = *(s+n-1-i);
        *(s+n-1-i) = temp;
    }
}
