#include <stdio.h>

void calculateDigitFrequency(int number) {
    // Array to store the frequency of each digit (0 to 9)
    int digitFrequency[10] = {0};

    // Handle negative numbers by converting them to positive
    if (number < 0) {
        number = -number;
    }

    // Count the frequency of each digit
    while (number > 0) {
        digitFrequency[number % 10]++;
        number /= 10;
    }

    // Display the frequency of each digit
    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (digitFrequency[i] > 0) {
            printf("Digit %d: %d times\n", i, digitFrequency[i]);
        }
    }

}

int main() {
    int number;

    // Input validation
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1; // Exit with an error code
    }

    calculateDigitFrequency(number);

    return 0;
}

// menu()
// {
//   while(1)
//   {
    
//   }
// }
