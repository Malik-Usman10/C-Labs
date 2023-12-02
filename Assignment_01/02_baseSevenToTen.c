#include <stdio.h>
#include <math.h>

int main()
{
    int digit = 0, i = 0, result = 0;
    do
    {
        printf("Enter a Base-7 digit (0 - 6): \n");
        scanf("%d", &digit);
          if (digit != -1 && digit >= 0 && digit <= 6)
        {
            result = result + (digit * pow(7 , i));
            i++;
        }
        else if (digit == -1)
        {
            break;
        }
        else
        {
            printf("Enter the Valid Number Between 0 - 6 \n");
        }
    }
    while (digit != -1);

    printf("The equivalent number in Base-10 is: %d \n", result);
}