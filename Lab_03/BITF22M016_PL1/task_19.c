// Number 1 - 100 and print Fizz for multiple of 3 and Buzz for the multiple of 5 and FizzBuzz for the multiple of both
#include<stdio.h>
int main()
{
int i;
for ( i = 1; i <= 100; i++)
{
   if (i % 3 == 0 && i % 5 == 0)
   {
        printf("FizzBuzz\n");
   }
   else if (i % 3 == 0 )
   {
        printf("Fizz\n");
   }
   else if (i % 5 == 0)
   {
        printf("Buzz\n");
   }
   else
   {
        printf("%d\n", i);
   }
   
   
   
}


}
