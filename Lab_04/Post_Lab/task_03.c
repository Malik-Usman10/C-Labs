/*
Create a C program that:  
• Takes input of two integers.  
• Finds the sum of all numbers which are dividends of 4 and 16, between these two integers.  
• Print an appropriate message if no such dividend (number) exists in the range.  
• Display the Sum of all divisible on the Console as shown in figure.  

*/ 
#include<stdio.h>
int main()
{
    int num1, num2, sum = 0, found = 0;
    printf("Enter First Integer: ");
    scanf("%d", &num1); 
    printf("Enter Second Integer: ");
    scanf("%d", &num2);
    for (int i = num1; i <= num2; i++)
    {
        if (i % 4 == 0 && i % 16 == 0)
        {
            if (found)
            {
                printf("+ ");
            }
            sum = sum + i;
            printf("%d ", i);
            found = 1;
        } 
    }
    if (found)
    {
       printf("= %d ", sum);    
    }
    else
    {
        printf("There are no Numbers in the range that are dividened of 4 and 16:\n");
    }
}