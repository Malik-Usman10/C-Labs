#include <stdio.h>
#include "header.h"

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