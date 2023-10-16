/*
Write a program that takes in a number from the user and calculates the sum of digits of the 
number. For example, if the user enters 1217, the program should print 11 (1+2+1+7). Hint: 
the logic is similar to reversed number logic. 
*/ 
#include<stdio.h>
int main()
{
    int number, sumOfDigits; 
    printf("Enter the Number:\n");
    scanf("%d", &number);
    while (number != 0)
    {
        sumOfDigits = (number % 10) + sumOfDigits;
        number = number / 10;
    }
    printf("Sum of the Digits are: %d ", sumOfDigits);  
}