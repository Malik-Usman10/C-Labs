#include <stdio.h>
int main(){
   int integer, temp, sum;
   printf("Enter the integer: ");
   scanf("%d", &integer);
   temp = integer/2;
    for (int i = 1; i <= temp; i++)
    {
        if (integer % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == integer)
    {
        printf("%d is a perfect number", integer);
    }
    else if (sum != integer)
    {
        printf("%d is not a perfect number", integer);
    }
}

