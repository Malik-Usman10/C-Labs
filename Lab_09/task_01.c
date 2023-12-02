#include <stdio.h>
#include <stdbool.h>


bool displayUniqueElements(int arr[], int size) 
{
    bool isUnique = true;
    for (int i = 0; i < size; i++) {
        isUnique = true;            
        for (int j = 0; j < size; j++) 
        {
            if (i != j && arr[i] == arr[j]) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique == true) 
        {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[5];

    printf("Enter %d elements: ", 5);
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Unique Elements");
    bool isUnique = displayUniqueElements(arr, 5);
}