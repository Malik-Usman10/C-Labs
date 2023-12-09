#include <stdio.h>

void displayMatrix(int matrix[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void swapDiagonals(int matrix[][10], int n) {
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - 1 - i];
        matrix[i][n - 1 - i] = temp;
    }
}

int main() {
    int matrix[10][10];
    int n;

    printf("Enter the size of the matrix (N): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
           matrix[i][j] = i * n + j + 1;
        }
    }

    printf("Original Matrix:\n");
    displayMatrix(matrix, n);


    swapDiagonals(matrix, n);

    printf("Modified Matrix:\n");
    displayMatrix(matrix, n);

    return 0;
}
