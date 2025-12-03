// function to exchange two variables

#include <stdio.h>

void exchange(int a, int b);

int main() 
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    exchange(x, y);
}

void exchange(int a, int b) 
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping\n");
    printf("Value of x = %d\n", a);
    printf("Value of y = %d\n", b);
}
