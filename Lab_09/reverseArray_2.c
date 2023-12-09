//Reversing a array by just swapping the value within the same array
#include<stdio.h>  
int main()  
{  
    int i, temp;   
    int arr[5];  
    printf("Enter the elements: ");  
    for(i = 0; i < 5; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  

    int endElem = 5 - 1;
    for (i = 0; i < 5 / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[endElem];
        arr[endElem] = temp;
        endElem--;
    }
    printf("The reverse Array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
}  

