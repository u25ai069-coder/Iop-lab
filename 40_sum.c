// to read numbers until negative number is added and give sum of rest of the numbers

#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter numbers\n");
    do
    {
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        sum = sum + n;
    } while (n > 0);
    
    printf("Sum = %d", sum);
}