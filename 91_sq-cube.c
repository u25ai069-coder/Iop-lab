// to square and cube a given number using pointer

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int *p = &n;

    printf("Square = %d\n", (*p)*(*p));
    printf("Cube = %d", (*p)*(*p)*(*p));
}