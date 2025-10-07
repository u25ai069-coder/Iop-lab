// to calculate commission on sales

#include <stdio.h>

int main ()
{
    float sales,eff_sales,commission;

    printf("Enter sales: ");
    scanf("%f", &sales);

    if (sales <= 500)
    {
        commission = sales / 20.0 ;
    }
    else if (sales > 500 && sales <= 2000)
    {
        eff_sales = sales - 500;
        commission = 35 + (eff_sales * 0.1);
    }
    else if (sales > 2000 && sales <= 5000)
    {
        eff_sales = sales - 2000;
        commission = 185 + (eff_sales / 8.333333);
    }
    else
    {
        commission = 5000 / 8;
    }
    printf("Commission = %f", commission);   
}