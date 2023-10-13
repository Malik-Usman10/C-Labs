/*
Now, implement the same logic from Q4 using do ... while loop.
*/ 
#include<stdio.h>
int i = 1 , num, total,averageOfTotal;
int main()
{
    do
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
    } while (1);    
}