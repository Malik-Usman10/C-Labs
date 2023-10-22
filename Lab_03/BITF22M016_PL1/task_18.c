// Generate the number between 1 - 100 and ask the user to guess it
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


bool isguessed(int num){
  int i, guess;
    while (true)
    {
       printf("Enter the guess:\n");
       scanf("%d", &guess);
       if (num == guess)
       {
        break;
       }
       else if (num < guess)
       {
        printf("Too high\n");
       }
       else if (num > guess)
       {
        printf("Too Low\n");
       }
    }
    return num == guess;
}
int main() {
    srand(time(NULL));
    int randomNumber = (rand() % 100);

    if(isguessed(randomNumber))
    {
      printf("Correct Guess: The Number is %d", randomNumber);
    }
    else
    {
        printf("The game is over:");
    }
    return 0;
}