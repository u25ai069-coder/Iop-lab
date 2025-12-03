// funtion to calculat nCr of a given number

#include <stdio.h>

int factorial(int n);
int nCr(int n, int r);

int main()
{
    int a, b;
    printf("Enter n: ");
    scanf("%d", &a);
    printf("Enter r: ");
    scanf("%d", &b);

    printf("nCr = %d", nCr(a,b));
}

int nCr(int n, int r)
{
    float x, y, z;
    x = factorial(n);
    y = factorial(r);
    z = factorial(n-r);

    int ans;
    ans = x / (y*z);
    return ans;
}

int factorial(int n)
{
    int ans=1;
    for (int i=2; i<=n; i++)
    {
        ans *= i;
    }
    return ans;
}