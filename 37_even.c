// to print even numbers till N

#include <stdio.h>

int main()
{
    int max;
    printf("Enter maximum: ");
    scanf("%d", &max);

    for (int i = 2; i <= max; i += 2)
    {
        printf("%d\t", i);
    }
}