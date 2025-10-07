// to swap two variables using third

#include <stdio.h>

int main()
{
    int var1, var2, var3;

    printf("Enter variable 1 = ");
    scanf("%d", &var1);

    printf("Enter variable 2 = ");
    scanf("%d", &var2);

    var3 = var1;
    var1 = var2;
    var2 = var3;

    printf("Variable 1 = %d\n", var1);
    printf("Variable 2 = %d\n", var2);
}