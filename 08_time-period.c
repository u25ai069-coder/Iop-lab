// to convert 3155150 seconds into days, hours, minutes 

#include <stdio.h>

int main()
{
    int seconds = 31558150;

    int days, hours;
    float minutes;

    minutes = seconds / 60.0 ;

    hours = minutes / 60;

    days = hours / 24;

    minutes = minutes - (hours*60);
    hours = hours - (days*24);

    printf("Total time period is of %d days, %d hours, %f minutes", days, hours, minutes);
}