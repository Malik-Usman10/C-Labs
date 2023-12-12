//print the pyramid but inverse

#include <stdio.h>
//Function declaration
void printTriangle(int height);

int main()
{
    int height;
    printf("Enter the Height of the Triangle: ");
    scanf("%d", &height);

    printTriangle(height);
}

void printTriangle(int height)
{
     for (int i = height; i >= 1; i--) 
     {
        for (int j = 0; j < height - i; j++) 
        {
            printf(" ");
        }

        for (int k = 0; k < 2 * i - 1; k++) 
        {
            printf("*");
        }

        printf("\n");
    }
}