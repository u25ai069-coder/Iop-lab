// to read a 3*3 matrix and print sum of rows

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

    int row_sum[3] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            row_sum[i] += a[i][j]; 
        }
    }

    for (int i=0; i<3; i++)
    {
        printf("Sum of elements of row %d: %d\n", i+1 , row_sum[i]);
    }
}