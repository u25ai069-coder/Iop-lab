// to read a 3*3 matrix and find max and min

#include<stdio.h>

int main()
{
    int a[3][3];

    printf("Enter values of matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int max = 0, min = 2147483647;

    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            max = (max > a[i][j]) ? max : a[i][j];
            min = (min < a[i][j]) ? min : a[i][j];
        }
    }    

    printf("Max of matrix is %d\n", max);
    printf("Min of matrix is %d", min);
}