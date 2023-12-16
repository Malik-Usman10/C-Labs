#include <stdio.h>
#include <stdbool.h>

void isPrime(int arr[], int size)
{
    //Start array with index 2 because 0 & 1 are not prime at all
    for (int i = 2; i <= size; i++) 
    {
        arr[i] = true;
    }

    for (int i = 2; 2 * i <= size; i++)       // i ==> // 2 * 2 = 4
    {                                         // j ==> // 4 == false //Inc = 4 + 2 = 6
        if (arr[i]) 
        {
            for (int j = 2 * i; j <= size; j = j + i) 
            {
            arr[j] = false;
            }
        }
    }
}

int main()
{
    int arr[1000] = {1};
    isPrime(arr,1000);

    printf("The Prime Numbers between 2 - 1000 is: \n");
    for (int i =  2; i <= 1000; i++) 
    {
        if (arr[i]) 
        {
            printf("%d ", i);
        }
    }


}