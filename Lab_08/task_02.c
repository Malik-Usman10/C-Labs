#include <stdio.h>
#include<stdbool.h>

int getInput();
int inputValidation(int num);
int displayPrime(int n);
bool firstCheck(int i);
bool secondCheck(int n);

int main()
{
    getInput();
}

int getInput()
{
    int num = 0;
    printf("Enter the Number: ");
    scanf("%d", &num);
    inputValidation(num);
    displayPrime(num);
}

int inputValidation(int num)
{
    if (num <= 0)
    {
        printf("Please Enter the Number Greater than 0");
        getInput();
    }   
}

int displayPrime(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        n = n - 1;
        if (firstCheck(i) && secondCheck(n) == true)
        {
            break;
        }
    } 
    if (firstCheck(i) && secondCheck(n) == true)
    {
        printf("This Number can Be Expressed as the pair of prime numbers Numbers are %d and %d\n", i , n);
    }
    else
    {
        printf(" This number cannot be expressed in the pair of Prime Number \n");
    }
        
     
}
  
bool firstCheck(int i)
{
    int j = i - 1;
    while (j > 1)
    {
        if (i % j == 0)
        {
            return false;
            break;
        }
        j--;   
    }
    if (j == 1)
    {
        return true;
    }
    
}
bool secondCheck(int n)
{
    int j = n - 1;
    while (j > 1)
    {
        if (n % j == 0)
        {
            return false;
            break;
        }
        j--;   
    }
    if (j == 1)
    {
        return true;
    }
     
}


    