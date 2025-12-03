// to find product of 2 matrices using pointers and dynamic memory allocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *(p[3]);
    int *(q[3]);
    int *res[3];

    for (int i=0; i<3; i++)
    {
        p[i] = malloc(3*sizeof(int));
        q[i] = malloc(3*sizeof(int));
        res[i] = calloc(3, sizeof(int));
    }

    printf("Enter values of 1st matrix\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d", p[i]+j);
        }
    }

    printf("Enter values of 2nd matrix\n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            scanf("%d",q[i]+j);
        }
    }
    
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            for (int k=0; k<3; k++)
            {
                *(res[i]+j) += *(p[i]+k) * *(q[k]+j);
            }
        }
    }

    printf("Resultant matrix: \n");
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("%d  ", *(res[i]+j));
        }
        printf("\n");
    }

    for(int i=0; i<3; i++) 
    {
        free(p[i]);
        free(q[i]);
        free(res[i]);
    }
}