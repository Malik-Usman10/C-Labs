#include <stdio.h>

int inputFirst();
int inputSecond();
int HCF(int num1, int num2);

int main()
{
    int num1 = inputFirst();
    int num2 = inputSecond();
    int HCF_Result = HCF(num1, num2);
    printf("HCF of %d and %d is = %d \n", num1, num2, HCF_Result);
}


int inputFirst()
{
    int input;
    do
    {

        printf("Input First Number for HCF:");
        scanf("%d", &input);
        if (input <= 0)
        {
            printf("Enter a positive no:\n ");
        }
    } while (input <= 0);

    return input;
}
int inputSecond()
{
    int input;
    do
    {
        printf("Input First Number for HCF:\n");
        scanf("%d", &input);
        if (input <= 0)
        {
            printf("Enter a positive no: \n");
        }
    } while (input <= 0);

    return input;
}

int HCF(int num1, int num2)
{
    while (num2 != 0)
    {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    return num1;
}