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
            sum += i;
            printf("The Sum is %d\n", sum);
        }
    }
    if (sum == integer)
    {
        printf("%d is a perfect number", integer);
    }
    if (sum != integer)
    {
        printf("%d is not a perfect number", integer);
    }
}

