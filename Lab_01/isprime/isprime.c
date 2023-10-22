// given a number print and tell if it is not prime

#include <stdio.h>
void isPrime(int n);

int main()
{
    isPrime(7);
}

void isPrime(int n)
{
    int d = n-1;
    while (d > 1)
    {
        if (n%d==0)
        {
            printf("Number is not prime");
            break;
        }
        d--;
        
    }
    if (d == 1)
    {
        printf("Number is Prime");
    }
    
}