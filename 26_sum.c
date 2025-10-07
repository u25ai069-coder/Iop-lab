// to give sum of all even and odd no. b/w 1 to n

#include <stdio.h>

int main()
{
    int n, i, even = 0, odd = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i < n + 1; i++)
    {
        if (i%2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
    }

    printf("Sum of all even numbers = %d\n", even);
    printf("Sum of all odd numbers = %d", odd);
}