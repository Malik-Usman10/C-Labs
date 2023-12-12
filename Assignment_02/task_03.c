// Given an integer, find out the frequency of each digit in it.
// Note: You are not allowed to use nested loops.
// Also make sure to do input validation for the driver function as well


#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age in Years : \t");
    scanf("%d", &age);

    while(age <= 0 )
    {
        printf("Are you comeding me. Enter correct : \t");
        scanf("%d", & age);
    }
    if (age > 120)
    {
       printf("You should be in Grave...  \n");
    }
    int ageMonths = age * 12 ;
    int ageHours = age * 365 * 24 ;
    long long ageMinutes = (long long) age * 365 * 24 * 60 ;
    long long ageseconds = (long long) age * 365 * 24 * 60 *  60 ;

    printf("\n%d is your age in Months.\n", ageMonths);
    printf("%d is your age in Hours.\n", ageHours);
    printf("%lldd is your age in Minutes.\n", ageMinutes);
    printf("%lld is your age in seconds.\n", ageseconds);
}
