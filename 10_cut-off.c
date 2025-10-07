// to calculate cut off marks

#include <stdio.h>

int main()
{
    int math_marks, phy_marks, chem_marks, entrance_marks;
    float cut_off;

    printf("Enter maths marks: ");
    scanf("%d", &math_marks);

    printf("Enter physics marks: ");
    scanf("%d", &phy_marks);

    printf("Enter chemistry marks: ");
    scanf("%d", &chem_marks);

    printf("Enter entrance exam marks: ");
    scanf("%d", &entrance_marks);

    cut_off = ((math_marks + phy_marks + chem_marks) / 2) + entrance_marks;

    printf("Cut off marks = %f", cut_off);
}