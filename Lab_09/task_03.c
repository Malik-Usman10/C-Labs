#include <stdio.h>

void printArray();

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArray(arr, 10);

}

void printArray(int arr[], int size){
    printf("The Array is  ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf(" \n");
    
}