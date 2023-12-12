#include <stdio.h>
#include <string.h>

void takeSentence(char sentence[], int size) {
    printf("Enter a sentence (up to %d characters): ", size);
    fgets(sentence, size, stdin);

    // Remove the trailing newline character if present
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }
}

void takeDelimiter(char delimiter[], int size) {
    printf("Enter a delimiter (up to %d characters): ", size);
    fgets(delimiter, size, stdin);

    // Remove the trailing newline character if present
    size_t len = strlen(delimiter);
    if (len > 0 && delimiter[len - 1] == '\n') {
        delimiter[len - 1] = '\0';
    }
}

void printDelimiter(char del) {
    printf("Delimiter: %c\n", del);
}

void printSentence(char sentence[], int size) {
    printf("Sentence: %s\n", sentence);
}

void tokenizeSentence(char sentence[], char delimiter, char tokens[][11]) {
    int wordIndex = 0;
    int charIndex = 0;

    for (int i = 0; i < strlen(sentence); i++) {
        if (sentence[i] != delimiter) {
            tokens[wordIndex][charIndex++] = sentence[i];

            // Check if the word length exceeds the maximum allowed length
            if (charIndex > 10) {
                fprintf(stderr, "Error: Word length exceeds the maximum allowed length of 10.\n");
                return;
            }
        } else {
            tokens[wordIndex++][charIndex] = '\0'; // Null-terminate the current word

            // Check if the number of words exceeds the maximum allowed limit
            if (wordIndex > 4) {
                fprintf(stderr, "Error: Number of words exceeds the maximum allowed limit of 5.\n");
                return;
            }

            charIndex = 0; // Reset character index for the next word
        }
    }

    // Handle the last word in the sentence
    tokens[wordIndex][charIndex] = '\0';

    // Check if the number of words exceeds the maximum allowed limit
    if (wordIndex + 1 > 5) {
        fprintf(stderr, "Error: Number of words exceeds the maximum allowed limit of 5.\n");
    }
}

void print2D(char tokens[][11], int r, int c) {
    printf("Tokenized Words:\n");
    for (int i = 0; i < r && tokens[i][0] != '\0'; i++) {
        printf("- %s at index [%d][%d]\n", tokens[i], i, i);
    }
}

int main() {
    char sentence[100];
    char delimiter[2];
    char tokens[5][11]; // Assuming a maximum of 5 words with each word having a maximum length of 10 characters

    takeSentence(sentence, sizeof(sentence));
    takeDelimiter(delimiter, sizeof(delimiter));
    printSentence(sentence, sizeof(sentence));
    printDelimiter(delimiter[0]);

    tokenizeSentence(sentence, delimiter[0], tokens);

    print2D(tokens, 5, 11);

    return 0;
}
