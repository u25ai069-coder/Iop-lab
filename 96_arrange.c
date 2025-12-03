// arrang en strings using pointers

#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    printf("Enter no of strings: ");
    scanf("%d", &n);
    getchar();

    char s[n][100];
    char *p[n];

    printf("Enter strings: \n");
    for (int i=0; i<n; i++)
    {
        gets(s[i]);
        p[i] = s[i];
    }

    char *temp;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n-i-1; j++)
        {
            if (strcmp(p[j], p[j+1]) > 0)
            {
                temp = p[j+1];
                p[j+1] = p[j];
                p[j] = temp;
            }
        }
    }

    printf("Arranged strings: \n");
    for (int i=0; i<n; i++)
    {
        puts(p[i]);
    }
}