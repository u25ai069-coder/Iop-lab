// to find max and min of 10 inputs 

#include <stdio.h>

int main()
{
    int i,a=0,max=0,min=2147483647;
    
    printf("Enter 10 numbers\n");
    for (i=0;i<10;i++)
    {
        scanf("%d", &a);

        max = (max > a) ? max : a;
        min = (min < a) ? min : a;
    }
    printf("Max = %d\n", max);
    printf("Min = %d", min);
}