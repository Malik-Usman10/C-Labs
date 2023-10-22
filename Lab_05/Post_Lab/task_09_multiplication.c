#include <stdio.h>
int main()
{
 int a, b, product = 0;
 printf ("Enter the 1st integer: ");
 scanf ("%d", &a);
 printf ("Enter the 2nd integer: ");
 scanf ("%d", &b);

 int num1 = a;  
 int num2 = b;  

 if (b < 0)
  {
      a = -a;
      b = -b;
  }
 for (int i = 1; i <= b; i++)
  {
     product = product + a; 
  }
 printf ("The product of %d and %d is: %d", num1, num2, product);
}