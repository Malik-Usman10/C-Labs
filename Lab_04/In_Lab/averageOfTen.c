/*
Write a C program that takes test scores in a PF quiz for 10 students and display the 
average by using a while loop
*/ 
#include<stdio.h>
int i = 1  , num, total,averageOfTen;
int main()
{
    while (i <= 10)
    {
        printf("Enter the Number of %d student for PF quizz:\n", i );
        scanf("%d", &num);
        total = total + num; 
        i = i + 1;
    }
    averageOfTen = total / 10;
    printf("The Average of PF Quizz is %d :", averageOfTen);    
}