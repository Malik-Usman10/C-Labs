/*
Create a C program that:
• Defines a character array of 10 10
• Sets values of array by taking a string literal as input from user
• Finds the frequency of each letter and display it on console
• Finds the most frequent letter and displays it on console
• Convert the string to uppercase and print on console
• Convert the string to lowercase and print on console
(You may use your functions from Q#3)
*/

#include <stdio.h>


int main() {
    char charArray[17];
    printf("Enter a string (up to %d characters): ", 10 - 1);
    for (int i = 0; i < 17; ++i) 
    {
      scanf("%c", &charArray[i]);
    }

      int frequency[26] = {0};

    for (int i = 0; i < 17; i++) {
        char currentChar = charArray[i];

        if ((currentChar >= 'a' && currentChar <= 'z') || (currentChar >= 'A' && currentChar <= 'Z')) {
            if (currentChar >= 'A' && currentChar <= 'Z')
            {
              currentChar = currentChar + ('a' - 'A');   // a- A = 32
            }
            else {
              currentChar = currentChar;
            }

            frequency[currentChar - 'a']++;
        }
    }


    printf("Frequency of each letter:\n");
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 0) {
            printf("%c: %d\n", i + 'a', frequency[i]);
        }
    }

    char mostFrequent = 'a';
    for (int i = 1; i < 26; i++) {
        if (frequency[i] > frequency[mostFrequent - 'a']) {
            mostFrequent = i + 'a';
        }
    }

    printf("Most frequent letter: %c\n", mostFrequent);

    //Upper Case
    for (int i = 0; i < 17; i++) 
    {
      if (charArray[i] >= 'a' && charArray[i] <= 'z') {
        charArray[i] = charArray[i] - ('a' - 'A');
      }
      else
      {
        charArray[i] = charArray[i];
      }
    }
    printf("Uppercase: %s\n", charArray);

    //Lower Case 
    for (int i = 0; i < 17; i++) 
    {
      if (charArray[i] >= 'A' && charArray[i] <= 'Z') 
      {
        charArray[i] = charArray[i] + ('a' - 'A');
      }
      else 
      {
      charArray[i] = charArray[i];
      }
    }
    printf("Lowercase: %s\n", charArray);

    return 0;
}
