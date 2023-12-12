#include <stdio.h>

int main()
{
    int hours = 0, minutes = 0;
    printf("Enter the hours and minutes( HH : MM ) \n");
    scanf("%d : %d", &hours, &minutes);

     while (hours < 0 || hours > 24 || minutes < 0 || minutes > 59)
    {
        printf(" Invalid Format ! Enter the correct time, in a format ( HH : MM ) \n ");
        scanf("%d : %d", &hours, &minutes);
    }

    char beforeNoon[] = "AM";
    char afterNoon[] = "PM";

    if ((hours > 12 && hours <= 23))
    {
        hours = hours % 12;
        printf("\n %d : %d  %s \n", hours, minutes, afterNoon);
    }
    else if (hours == 24)
    {
        hours = hours % 12;
        printf("\n Converted into 12 Hours Format \t %d : %d  %s \n", hours, minutes, beforeNoon);
    }
    else if (hours == 12)
    {
        printf("\n Converted into 12 Hours Format \t %d : %d \t %s \n", hours, minutes, afterNoon);
    }
    else
    {
        printf("\n %d : %d \t %s \n", hours, minutes, beforeNoon);
    }
}