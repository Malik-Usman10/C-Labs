#include <stdio.h>

int getInput();
int strongNumberFinder(int num);
int displayResult(int num, int strongNum);
int inputValidation(int num);

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
    int strongNum = strongNumberFinder(num);
    displayResult(num , strongNum);
}

int inputValidation(int num)
{
    if (num <= 0)
    {
        printf("Please Enter the Number Greater than 0");
        getInput();
    }
    
}

int strongNumberFinder(int num)
{
    int temp = 0;
    int sum = 1;
    while (num != 0)
    {
        int digit = num % 10;
        for (int i = digit ; i > 0; i--)
        {
            sum = sum * i;
        }
        temp = temp + sum; 
        sum = 1;
        num /= 10;
    }
    return temp;
}


int displayResult(int num, int strongNum)
{
    if (strongNum == num )
    {
        printf("%d is a Strong Number: \n", num);
    }
    else if (strongNum != num)
    {
        printf("%d is not Strong Number: \n", num);
    }
}
