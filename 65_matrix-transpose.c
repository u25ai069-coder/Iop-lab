// to find transpose of 3*3 matrix

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

    printf("Transpose of Matrix A: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}