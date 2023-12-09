#include<stdio.h>
int main()
{
    int sumEven = 0, i;
    for (i = 2; i <= 100; i = i + 2)
    {
        sumEven = sumEven + i;
    }
    printf("The Sum of all even number is: %d", sumEven);
}