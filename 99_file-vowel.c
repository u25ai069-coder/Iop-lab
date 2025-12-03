// to read a file and count no of vowel

#include <stdio.h>

int main()
{
    FILE *pF = fopen("words.txt", "r");

    char st[255];
    int vow=0;

    while(fgets(st, 255, pF) != NULL)
    {
        for (int i=0; st[i] != '\0'; i++)
        {
            if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u')
            {
                vow++;
            }
        }
    }

    printf("No of vowels = %d", vow);

    fclose(pF);
}