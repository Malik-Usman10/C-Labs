// Generate the number between 1 - 100 and ask the user to guess it
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isguessed(int num){
  int i = 1, guess;
    while (1)
    {
       printf("Enter the guess between 1-100:  ");
       scanf("%d", &guess);
       if (num == guess)
       {
        printf("Correct! You Got it in %d guesses.\n", i );
        break;
       }
       else if (guess > num)
       {
        printf("Too high\n");
       }
       else if (guess < num)
       {
        printf("Too Low\n");
       }
       i++;
    }
    return 0;
}

int main() {
    srand(time(NULL));
    int randomNumber = (1 + rand() % 100);
    isguessed(randomNumber);
}