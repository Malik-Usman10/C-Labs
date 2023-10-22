/*
Modify your program in from Q3 so that instead of inputting scores for only 10 
students, it now keeps taking input until the teacher (user) presses -1. (Use sentinel-
controlled while loop).
*/ 
#include<stdio.h>
int i = 1 , num, total,averageOfTotal;
int main()
{
    while (1)
    {
        printf("Enter the Number of %d student for PF quizz:\n", i );
        scanf("%d", &num);
        if (num == -1)
        {
            i = i -1;
            averageOfTotal = total / i ;
            printf("The Average of PF Quizz is: %d", averageOfTotal); 
            return 0;
        }
         total = total + num; 
         i = i + 1;
    }   
}