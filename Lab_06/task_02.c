// Write a function to print right-angled triangle pattern.
#include <stdio.h>
// Function declaration || fucntions proptypes
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
    for (int i = 0; i <= height; i++) 
    {
        for (int j = 0; j <= i ; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

}