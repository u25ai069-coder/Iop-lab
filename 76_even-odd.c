// to use a funtion to check if a number is even or odd

#include<stdio.h>

void check(int n);

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    check(a);
}

void check(int n)
{
    if (n%2 == 0)
    {
        printf("No is even");
    }
    else
    {
        printf("No is odd");
    }
}