// to calculate gross salary 

#include <stdio.h>

int main()
{
    int gross_salary, basic_salary, allowance, bonus;

    printf("Enter salary: ");
    scanf("%d", &basic_salary);

    printf("Enter allowance: ");
    scanf("%d", &allowance);

    printf("Enter bonus: ");
    scanf("%d", &bonus);

    gross_salary = basic_salary + allowance + bonus;

    printf("Gross salary = %d", gross_salary);
}