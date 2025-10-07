// to calculate area of triangle

#include <stdio.h>
#include <math.h>

int main()
{
    int side1, side2, side3;
    double semi_perimeter, area, base, power;

    printf("Enter side 1: ");
    scanf("%d", &side1);

    printf("Enter side 2: ");
    scanf("%d", &side2);

    printf("Enter side 3: ");
    scanf("%d", &side3);

    semi_perimeter = (side1 + side2 + side3) / 2;

    power = 0.5;

    base = (semi_perimeter) * (semi_perimeter - side1) * (semi_perimeter - side2) * (semi_perimeter - side3);

    area = pow(base, power);

    printf("Area of triangle = %lf", area);
    
}