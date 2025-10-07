// to print odd numbers till N

#include <stdio.h>

int main()
{
    int max;
    printf("Enter maximum: ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i += 2)
    {
        printf("%d\t", i);
    }
}