/*
Write a C program to find the sum of all even numbers between 2 and 100 (both 
inclusive) by using a for loop. You are not allowed to use an if statement in this 
question
*/
#include<stdio.h>
int main()
{
    int sumEven, i;
    for (i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + i; 
        }
    }
    printf("The Sum of all even number is: %d", sumEven);
    
}