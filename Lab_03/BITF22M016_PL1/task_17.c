#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10;
        num = num / 10;
        reversedNum = reversedNum * 10 + digit;
    }

    return originalNum == reversedNum;
}

int main() {
    int integer;

    printf("Enter an integer: ");
    scanf("%d", &integer);

    if (isPalindrome(integer))
    {
        printf("%d is a palindrome.\n", integer);
    } else
    {
        printf("%d is not a palindrome.\n", integer);
    }

    return 0;
}


󰣐