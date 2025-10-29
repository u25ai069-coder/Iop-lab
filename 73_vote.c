// program to count vote for 5 candidates

#include<stdio.h>

int main(void)
{
    int ballot;
    int vote[6] = {0, 0, 0, 0, 0, 0};

    int n;
    printf("No of voters: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("Choise of voter %d: ", i+1);
        scanf("%d", &ballot);

        if (ballot > 5 || ballot < 1)
        {
            vote[5]++;
        }

        for (int j=0; j<5; j++)
        {
            if (ballot == j+1)
            {
                vote[j]++;
            }
        }
    }

    printf("Votes accumulated by each candidate: \n");
    for (int i=0; i<5; i++)
    {
        printf("Candidate %d: %d\n", i+1, vote[i]);
    }
    printf("spoilt votes: %d", vote[5]);
}