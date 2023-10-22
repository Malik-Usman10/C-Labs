#include <stdio.h>
#include <math.h>

int main()
{
 int number, originalNum;
 double digit = 0;
 int sum = 0;
 printf ("Enter a number: ");
 scanf ("%d", &number);
 originalNum = number;

 while (originalNum != 0)
 {
     digit = originalNum % 10;
     sum = sum + pow(digit,3);
     originalNum /= 10;
 }
 if (sum == number)
 {
     printf ("%d is an Armstrong number", number);
 }
 else
 {
     printf ("%d is not an Armstrong number", number);
 }
}