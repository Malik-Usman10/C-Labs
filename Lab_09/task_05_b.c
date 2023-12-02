#include <stdio.h>

void displayAverageScores(int scores[][5]) 
{
    int sum = 0, average = 0;
    int i, j;
    for(j = 1; j <= 5; j++)
    {
        for(i = 1; i <= 3; i++)
        {
            sum += scores[i][j];
        }
        average = sum / 3;
        printf("Average marks of test %d: %d \n", j, average);
    }
}

int main() {
    int scores[3][5];

    printf("Enter marks of 3 students for 5 tests:\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter the Marks of Student %d \n", i);
        for (int j = 1; j <= 5; j++) 
        {            
            printf("Enter the Marks of Test %d :", j);
            scanf("%d", &scores[i][j]);
            if (scores[i][j] < 0 || scores[i][j] > 100)
            {
                printf("Please Enter the Number Between 0- 100 \n");
                main();
            }
        }
    }
    printf("Average scores of each Test:\n");
    displayAverageScores(scores);
}