#include <stdio.h>
#include <stdbool.h>


void createMatrix(int matrix[3][3])
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++) 
        {            
            printf("Enter the Values of Matrix ( %d , %d ) ", i, j);
            scanf("%d", &matrix[i][j]);            
        }
    }
}

bool checkDiagonal(int matrix[3][3])
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++) 
        {            
            if(i != j && matrix[i][j] != 0)
            {
                return false;  
            }
        }
        for (int j = 1; j <= 3; j++) 
        {            
            if(matrix[i][i]!= 0)
            {
                return true;  
            }
        }
    }
    return true;
}

bool isIdentityMatrix(int matrix[3][3])
 {
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return false;
            }
        }
    }
    return true;
}

void displayMatrix(int matrix[3][3])
{
    printf("Matrix:\n");
    for (int i = 1; i <= 3; i++) 
    {
        for (int j = 1; j <= 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int matrix[3][3];
    createMatrix(matrix);

    displayMatrix(matrix);

     if (checkDiagonal(matrix)) {
        printf("The matrix is a diagonal matrix.\n");
    } else {
        printf("The matrix is not a diagonal matrix.\n");
    }

    if (isIdentityMatrix(matrix)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }
    return 0;
}
