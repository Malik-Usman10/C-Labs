#include<stdio.h>
int main()
{
    int largeVal, smallVal, inputTimeVal, temp;
    printf("Enter the Number of Values (n):");
    scanf("%d", &inputTimeVal);
    smallVal = inputTimeVal;
    largeVal = inputTimeVal;
    for (int i = 1; i <= inputTimeVal; i++)
    {
        printf("Enter value %d:", i);
        scanf("%d", &temp); 
        if (temp > largeVal)
        {
            largeVal = temp;
        }
        if (temp < smallVal)
        {
            smallVal = temp;
        }            
    }
    printf("The large Value is: %d\n", largeVal);
    printf("The small Value is: %d\n", smallVal);
}