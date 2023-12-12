//print the traingle not right angled but start from center

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
    for (int i = 1; i <= height; i++) 
    {
        for (int j = 1; j <= height - i ; j++) 
        {
            printf(" ");
        }
        for (int k = 1; k <= 2*i - 1 ; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
}