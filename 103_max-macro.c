// to decfine a macro that finds max of to given no.

#include <stdio.h>

#define max(a,b) ((a) > (b) ? (a) : (b))

int main()
{
    int x, y;
    printf("Enter x, y: ");
    scanf("%d %d", &x, &y);

    int max = max(x,y);
    printf("Max = %d", max);
}