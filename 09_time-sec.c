// to convert hours minutes seconds into total seconds

#include <stdio.h>

int main()
{
    int hours, minutes, seconds, total_seconds;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    total_seconds = seconds + (minutes*60) + (hours*60*60);

    printf("Total seconds = %d", total_seconds);
}