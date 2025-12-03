// to read a file and count no of letters, words and lines

#include <stdio.h>

int main()
{
    FILE *pF = fopen("words.txt", "r");
    char c;
    int letter=0, words=1, lines=1;

    while(fread(&c, sizeof(c), 1, pF) != 0)
    {
        if (c == ' ' || c == ',' || c == '.' || c == '!')
            words++;
        else if (c == '\n')
            lines++;
        else
            letter++;
    }

    printf("Letters = %d\nWords = %d\nLines = %d", letter, words, lines);

    fclose(pF);
}