#include <stdio.h>
#include <string.h>

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

    size_t len = strlen(delimiter);
    if (len > 0 && delimiter[len - 1] == '\n') 
    {
        delimiter[len - 1] = '\0';
    }
}
void tokenizeSentence(char sentence[], char delimiter, char tokens[][11]) 
{
    int wordIndex = 0;
    int charIndex = 0;

    for (int i = 0; i < strlen(sentence); i++) 
    {
        if (sentence[i] != delimiter) 
        {
            tokens[wordIndex][charIndex++] = sentence[i];
            if (charIndex > 11) {
                printf("Error: Word length exceeds the maximum length of 11.\n");
                return;
            }
        } 
        else 
        {
            tokens[wordIndex++][charIndex] = '\0'; 
            if (wordIndex > 5) 
            {
                printf("Error: Number of words exceeds the allowed limit of 5.\n");
                return;
            }

            charIndex = 0;
        }
    }

    tokens[wordIndex][charIndex] = '\0';

    if (wordIndex + 1 > 5) 
    {
        printf("Error: Number of words exceeds the allowed limit of 5.\n");
        return;
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

int main() {
    char sentence[110];
    char delimiter[2];
    char tokens[5][11]; 

    takeSentence(sentence, sizeof(sentence));
    takeDelimiter(delimiter, sizeof(delimiter));
    tokenizeSentence(sentence, delimiter[0], tokens);

    print2D(tokens, 5, 11);

    return 0;
}
