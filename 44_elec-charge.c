// to calculate electric bill

#include <stdio.h>

int main()
{
    int consumption;
    float charge;

    printf("Enter unit consumption = ");
    scanf("%d", &consumption);

    if (consumption <= 200)
    {
        charge = consumption * 0.50;
    }
    else if (consumption > 200 && consumption <= 400)
    {
        charge = 100 + ((consumption - 200) * 0.65);
    }
    else if (consumption > 400 && consumption <= 600)
    {
        charge = 230 + ((consumption - 200) * 0.85);
    }
    else 
    {
        charge = 425 + ((consumption - 200) * 1.25);
    }
    printf("%f",charge);
}
