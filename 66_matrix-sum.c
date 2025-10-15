// read two matrix and store its sum in third matrix

#include<stdio.h>

int main()
{
    int a[3][3], b[3][3], ans[3][3];

    printf("Enter values of matrix a: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter values of matrix b: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            ans[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix with sum: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

}