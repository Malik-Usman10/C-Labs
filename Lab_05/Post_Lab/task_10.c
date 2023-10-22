#include<stdio.h>
int main()
{
    int firstFibNum = 0;
    int secondFibNum = 1;
    int nxtFibNum, inputVal;
    printf("How many Numbers of Fibonacci series you want? ");
    scanf("%d", &inputVal);
    if(inputVal < 0)
    {
        printf("Enter a positive integar\n");
    }
    printf("The first %d fibonacci Numbers are:\n",inputVal);
    for(int i = 0; i < inputVal; i++)
    {
        if(i <= 1)
        nxtFibNum = i;
        else
        {
            nxtFibNum = firstFibNum + secondFibNum;
            firstFibNum = secondFibNum;
            secondFibNum = nxtFibNum;
        }
        printf("%d ",nxtFibNum);
    }
}