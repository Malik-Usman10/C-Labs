#include <stdio.h>


void displayFloor(int floor[50][50]) 
{
    for (int i = 0; i < 50; i++) 
    {
        for (int j = 0; j < 50; j++) 
        {
            if (floor[i][j] == 1)
            {
                printf("1");
            } 
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int floor[50][50] = {0}; 
    int x = 50 / 2; 
    int y = 50 / 2;
    int penDown = 0; // for up : 1 for down
    int direction = 0;  
 // commands order 1,2: pen Direc , than 3,4 for direction, than steps how much in that direction...
    int commands[] = {2, 5, 12, 3, 5, 12, 3, 5, 12, 3, 5,12, 1 ,6, 9 };

    for (int i = 0; commands[i] != 9; i++) {
        switch (commands[i]) {
            case 1:
                penDown = 0;
                break;
            case 2:
                penDown = 1;
                break;
            case 3:
                direction = (direction + 1) % 4;
                break;
            case 4:
                direction = (direction + 3) % 4;
                break;
            case 5:
                {
                    int steps = commands[i + 1];
                    i++;
                    while (steps > 0) {
                        switch (direction) {
                            case 0:
                                if (penDown) floor[y][x++] = 1; //move forward
                                break;
                            case 1:
                                if (penDown) floor[y++][x] = 1;  //move upwardd
                                break;
                            case 2:
                                if (penDown) floor[y][x--] = 1;   //move back
                                break;
                            case 3:
                                if (penDown) floor[y--][x] = 1; //move downward
                                break;
                        }
                        steps--;
                    }
                }
                break;
            case 6:
                displayFloor(floor);
                break;
            case 9:
                break;
        }
    }

    return 0;
}
