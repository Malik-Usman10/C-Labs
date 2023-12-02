
#include<stdio.h>
#include <stdbool.h>

int main()
{
    int array[5], i, temp[5], j = 0;
    printf("Input The Five Numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    } 
    printf("The Reverse array is:");
    for (j = 0; j < 5; j++)
    {
        temp[j] = array[4 - j];
    }
    printf("%d", temp[j]);
    printf(" \n");
}
