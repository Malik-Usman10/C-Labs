#include <stdio.h>

void displayAverageScores(int scores[][5], int num_students) 
{
    int average_scores[num_students];
    for (int i = 1; i <= num_students; i++) 
    {
        int sum = 0;
        for (int j = 0; j < 5; j++) 
        {
            sum += scores[i][j];
        }
        average_scores[i] = sum / 5;
    }

    for (int i = 1; i <= num_students; i++) 
    {
        printf("Average score of student %d: %d\n", i, average_scores[i]);
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
    printf("Average scores of each student:\n");
    displayAverageScores(scores, 3);
}