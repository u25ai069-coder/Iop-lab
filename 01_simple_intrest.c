// to calculate simple intrest

#include <stdio.h>

int main()
{
    int principle, rate, time;
    float simple_intrest;

    printf("Principle ");
    scanf("%d", &principle);

    printf("rate ");
    scanf("%d", &rate);

    printf("time ");
    scanf("%d", &time);

    simple_intrest = (principle*rate*time) / 100;

    printf("simple intrest = %f", simple_intrest);
}