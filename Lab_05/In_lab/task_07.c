#include <stdio.h>

int main() {
    int integer, digit;
    printf("Enter an integer: ");
    scanf("%d", &integer);
    int originalNum = integer;
    int reversedNum = 0;
    while (integer != 0) {
        digit = integer % 10; 
        integer = integer / 10;
        reversedNum = reversedNum * 10 + digit;                         
    }
    if (reversedNum == originalNum)
    {
        printf("%d is a palindrome.\n", originalNum);
    }
    else
    {
        printf("%d is not a palindrome.\n", originalNum);
    }
}