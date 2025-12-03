// function to check if a number is pallindrome or not

#include<stdio.h>

void pallindrome(int n);

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    pallindrome(num);   
}

void pallindrome(int n)
{
    int temp, rev = 0, a;
    temp = n;

    while (n > 0)
    {
        a = n%10;
        rev = rev*10 + a;
        n = n/10;
    }
    if (rev == temp)
    {
        printf("Number %d is palindrom", temp);
    }
    else
    {
        printf("Number %d is not palindrom", temp);
    }
}