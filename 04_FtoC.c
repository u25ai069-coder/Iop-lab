// to convert degree F to degree C

#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    printf("Temperature in Fahrenheit = ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 0.555555;

    printf("Temperature in Celsius = %f", celsius);
}