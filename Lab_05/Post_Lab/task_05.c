#include <stdio.h>
int main()
{
 int a, b;
 printf ("Enter the first positive integer: ");
 scanf ("%d", &a);
 printf ("Enter the second positive integer: ");
 scanf ("%d", &b);
 int sum = a;
 if (a >= 0 && b >= 0)
 {
    for (int i = 1; i <= b; i++)
    {
       sum++;
    }
     
    printf ("The addition of %d and %d is: %d", a, b, sum);
 }
 else
 {
    printf ("Invalid Input");
 }
 
 return 0;
}