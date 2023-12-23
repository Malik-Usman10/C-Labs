#include <stdio.h>

void calculateDigitFrequency(int number) {

    int digitFrequency[10] = {0};

    if (number < 0) {
        number = -number;
    }                                           // 0 0 0 0 0 0 0 0 0 0
                                                // 0 0 1

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

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    calculateDigitFrequency(number);

    return 0;
}
