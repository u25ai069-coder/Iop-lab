// to find max and 2nd max of 10 inputs

#include <stdio.h>

int main()
{
    int i,a=0,max=0,max2=0;
    
    printf("Enter 10 numbers\n");
    for (i=0;i<11;i++)
    {
        if (a > max2 && a < max)
        {
            max2 = a;
        }

        if (i == 10)
        {
            break;
        }

        scanf("%d", &a);

        max = (max > a) ? max : a;
    }
    printf("Max = %d\n", max);
    printf("2nd Max = %d", max2);
}