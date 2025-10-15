// to read 10 inputs and count odd , even in them

#include <stdio.h>

int main() 
{
    int num[10];
    int even = 0;
    int odd = 0;
    int i;

    printf("Enter 10 integer numbers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Total number of even elements: %d\n", even);
    printf("Total number of odd elements: %d\n", odd);
}