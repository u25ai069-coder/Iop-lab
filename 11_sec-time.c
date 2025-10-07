// to convert total seconds into hours minutes seconds 

#include <stdio.h>

int main()
{
    int hours, minutes, seconds, total_seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    minutes = total_seconds / 60;
    hours = minutes / 60;

    seconds = total_seconds - (minutes*60);
    minutes = minutes - (hours*60);

    printf("Time is %d hours %d minutes %d seconds", hours, minutes, seconds);
}