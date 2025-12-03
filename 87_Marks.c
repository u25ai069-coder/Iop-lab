// program to read marks of 10 studens and function to display marks higher than 500

#include <stdio.h>

void display(int a[]);

int main()
{
    int marks[10];
    printf("Enter marks of 10 students: \n");
    for(int i=0; i<10; i++)
    {
        scanf("%d", &marks[i]);
    }

    display(marks);
}

void display(int a[])
{
    for(int i=0; i<10; i++)
    {
        if (a[i] > 500)
        {
            printf("Student %d with marks %d\n", i+1, a[i]);
        }
    }
}