// to create an enum of colour and use it in switch case

#include <stdio.h>
#include <string.h>

typedef enum {
    RED, BLUE, GREEN, YELLOW, ORANGE, WHITE, BLACK, UNKNOWN
} colour;


colour getColourEnum(char *input);

int main()
{
    char s[10];
    printf("Enter colour (in all caps): ");
    scanf("%s", s);

    colour c = getColourEnum(s);

    switch (c)
    {
        case RED:    printf("FF0000"); break;
        case BLUE:   printf("0000FF"); break;
        case GREEN:  printf("00FF00"); break;
        case YELLOW: printf("FFFF00"); break;
        case ORANGE: printf("FFA500"); break;
        case WHITE:  printf("FFFFFF"); break;
        case BLACK:  printf("000000"); break;
        default:     printf("Enter different colour value");
    }
    return 0;
}

colour getColourEnum(char *input) 
{
    if (strcmp(input, "RED") == 0) return RED;
    if (strcmp(input, "BLUE") == 0) return BLUE;
    if (strcmp(input, "GREEN") == 0) return GREEN;
    if (strcmp(input, "YELLOW") == 0) return YELLOW;
    if (strcmp(input, "ORANGE") == 0) return ORANGE;
    if (strcmp(input, "WHITE") == 0) return WHITE;
    if (strcmp(input, "BLACK") == 0) return BLACK;
    return UNKNOWN;
}