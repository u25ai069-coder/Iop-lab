// function to check if a number is armstrong

#include<stdio.h>

int power(int base,int exp);
void armstrong(int num);

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    armstrong(n);
}

void armstrong(int num)
{
    int temp, len = 0, sum = 0, a;
    temp = num;

    while (temp > 0)
    {
        temp /= 10;
        len++;
    }
    
    temp = num;
    
    while (num > 0)
    {
        a = num%10;
        sum += power(a,len);
        num = num/10;
    }
    if (sum == temp)
    {
        printf("number %d is armstrong", temp);
    }
    else
    {
        printf("number %d is not armstrong", temp);
    }
}

int power(int base,int exp)
{
    int ans=1;
    for(int i=0; i<exp; i++)
    {
        ans *= base;
    }
    return ans;
}