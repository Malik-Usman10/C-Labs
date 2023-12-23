// M Usman Kareem     BITF22M016
#include <stdio.h>
#include <string.h>


//Question 1 Prototypes
int taskOneInitializer();
void takeSentence(char sentence[], int size); 
void takeDelimiter(char delimiter[], int size); 
void print2D(char tokens[][11], int r, int c);
void tokenizeSentence(char sentence[], char delimiter, char tokens[][11]);

//Question No 2 Prototypes
int taskTwoInitializer();
void calculateDigitFrequency(int number);

//Question No 3 Prototypes
int taskThreeInitializer();

//Question No 4 Prototypes
int taskFourInitializer();
void calculateAge(int hours, int minutes);

int main()
{
        // taskOneInitializer();
        // taskTwoInitializer();
        // taskThreeInitializer();
        taskFourInitializer();
}


int taskOneInitializer() {
    char sentence[100];
    char delimiter[2];
    char tokens[5][11]; 

    takeSentence(sentence, sizeof(sentence));
    takeDelimiter(delimiter, sizeof(delimiter));
    tokenizeSentence(sentence, delimiter[0], tokens);

    print2D(tokens, 5, 11);

    return 0;
}


void takeSentence(char sentence[], int size) {
    printf("Enter a sentence (up to %d characters): ", size);
    fgets(sentence, size, stdin);

    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') 
    {
        sentence[len - 1] = '\0';
    }
}

void takeDelimiter(char delimiter[], int size) 
{
    printf("Enter a delimiter (up to %d characters): ", size);
    fgets(delimiter, size, stdin);

}
void tokenizeSentence(char sentence[], char delimiter, char tokens[][11]) 
{
    int w = 0;
    int c = 0;                       

    for (int i = 0; i < strlen(sentence); i++)
    {
        if (sentence[i] != delimiter) 
        {
            tokens[w][c++] = sentence[i];
            if (c > 10) {
                printf("Error: Word length greater than 10.\n");
                return;
            }
        } 
        else 
        {
            tokens[w++][c] = '\0'; 
            if (w > 5) 
            {
                printf("Error: Number of words exceeds limit of 5.\n");
                return;
            }
            c = 0;
        }
    }
}

void print2D(char tokens[][11], int r, int c) 
{
    printf("Tokenized Words:\n");
    for (int i = 0; i < r && tokens[i][0] != '\0'; i++) 
    {
        printf("- %s             \t\t\t at index [%d][%d]\n", tokens[i], i, i);
    }
}



//Question No 2

void calculateDigitFrequency(int number) {

    int digitFrequency[10] = {0};

    if (number < 0) {
        number = -number;
    }


    while (number > 0) {
        digitFrequency[number % 10]++;
        number /= 10;
    }

    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (digitFrequency[i] > 0) {
            printf("Digit %d: %d times\n", i, digitFrequency[i]);
        }
    }

}

int taskTwoInitializer() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    calculateDigitFrequency(number);
    return 0;
}

//Question No 3
///To do type validation
int taskThreeInitializer()
{
    int age, ageInMonths, ageInHours;
    long long ageInMinutes , ageInSeconds;
    printf("Enter your age in Years : \n");
    scanf("%d", &age);

    while(age <= 0 || age > 150)
    {
        printf("Please Enter a Correct age : \n");
        scanf("%d", & age);
    }
    ageInMonths = age * 12 ;
    ageInHours = age * 365 * 24 ;
    ageInMinutes = (long long) age * 365 * 24 * 60;
    ageInSeconds = (long long) age * 365 * 24 * 60 * 60;

    printf("\n%d is your age in Months.\n", ageInMonths);
    printf("%d is your age in Hours.\n", ageInHours);
    printf("%lldd is your age in Minutes.\n", ageInMinutes);
    printf("%lld is your age in seconds.\n", ageInSeconds);
    return 0;
}

//Question No 4 

int taskFourInitializer()
{
    int hours = 0, minutes = 0;
    printf("Enter the hours and minutes( HH : MM ) \n");
    scanf("%d : %d", &hours, &minutes);
    calculateAge(hours, minutes);

    return 0;
}

void calculateAge(int hours, int minutes)
{
    while (hours < 0 || hours > 24 || minutes < 0 || minutes > 59)
    {
        printf(" Invalid Format ! Enter the correct time, in a format ( HH : MM ) \n ");
        scanf("%d : %d", &hours, &minutes);
    }

    char beforeNoon[] = "AM";
    char afterNoon[] = "PM";

    if ((hours > 12 && hours <= 23))
    {
        hours = hours % 12;
        printf("Converted into 12 Hours Format %d : %d  %s \n", hours, minutes, afterNoon);
    }
    else if (hours == 24)
    {
        hours = hours % 12;
        printf("Converted into 12 Hours Format \n %d : %d  %s \n", hours, minutes, beforeNoon);
    }
    else if (hours == 12)
    {
        printf("Converted into 12 Hours Format \n %d : %d \t %s \n", hours, minutes, afterNoon);
    }
    else
    {
        printf("Converted into 12 Hours Format %d : %d \t %s \n", hours, minutes, beforeNoon);
    }
}


