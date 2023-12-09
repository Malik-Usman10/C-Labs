#include <stdio.h>
//Fucntion Prototypes
int truncate(float num);
int round(float num);
int ceiling(float num);
int floor(float num);


int main()
{
    float num;
    printf("Enter the Float Number: ");
    scanf("%f", &num);
    int truncateNum = truncate(num);
    printf("The number after trunaction is %d \n", truncateNum);
    int roundNum = round(num);
    printf("The number after rounding is %d \n", roundNum);
    int ceilNum = ceiling(num);
    printf("The number after ceiling is %d \n", ceilNum);
    int floorNum = floor(num);
    printf("The number after flooring is %d \n", floorNum);
}


int truncate(float num)
{
    return num / 1;
}

int round(float num)
{
    if (num <= 0)
    {
        num = num - 0.5;
        return num / 1;
    }
    else if ( num > 0 )
    {
        num = num + 0.5;
        return num / 1;
    }   
}
int floor(float num)
{
    if (num < 0) {
        num = num - 1;
        return num / 1;
    }
    else if (num >= 0 ) {
        return num / 1 ;
    }
}

int ceiling(float num)
{
    if (num <= 0)
    {
        return  num / 1;
    }
    else if (num > 0 )
    {
        num = num + 1;
        return num / 1; 
    }
}