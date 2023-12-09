/*
Create a program that takes an integer (1-12) as input and uses a switch statement 
to display the name of the corresponding month (e.g., 1 for January, 2 for February, 
and so on)
*/
#include<stdio.h>
int main()
{
    int n, month;
    printf("Enter the Number Between 1 - 12:\n");
    scanf("%d", &n);
    if (n <= 12)
    {
        month = n;
    }
    else 
    {
        printf("Enter the valid number b/w 1-12:\n");
    }
    switch (month)
    {
    case (1):
        printf("January");
        break;
    case (2):
        printf("Febrary");
        break;
    case (3):
        printf("March");
        break;
    case (4):
        printf("April");
        break;
    case (5):
        printf("May");
        break;
    case (6):
        printf("June");
        break;
    case (7):
        printf("July");
        break;
    case (8):
        printf("August");
        break;
    case (9):
        printf("September");
        break;
    case (10):
        printf("October");
        break;
    case (11):
        printf("November");
        break;
    case (12):
        printf("December");
        break;
    }
}