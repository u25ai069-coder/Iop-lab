// to create a file and append to it

#include <stdio.h>

int main()
{
    FILE *pF = fopen("LNMIITSTUDENT.DAT", "a");

    char s[100];
    
    printf("Enter Name: ");
    gets(s);
    fprintf(pF, "Name: %s | ", s);

    printf("Enter City(State): ");
    gets(s);
    fprintf(pF, "City(State): %s | ", s);
    
    printf("Enter Roll no: ");
    gets(s);
    fprintf(pF, "Roll no: %s \n", s);

    fclose(pF);
}