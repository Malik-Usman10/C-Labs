#include <stdbool.h>
#include <stdio.h>

bool isUpper(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return true;
    }
    else {
        return false;
    }
}

bool isLower(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return true;
    }
    else {
        return false;
    }
}

bool isAlpha(char ch) {
    if (isUpper(ch) || isLower(ch)) {
        return true;
    }
    else {
        return false;
    }
}

bool isSpace(char ch) {
    if (ch == ' ' || ch == '\t' || ch == '\n') {
        return true;
    }
    else {
        return false;
    }
}

bool isDigit(char ch) {
    if (ch >= '0' && ch <= '9') {
        return true;
    }
    else {
        return false;
    }
}

char toUpper(char ch) {
    if (isLower(ch) == true) {
        return ch - ('a' - 'A');  
    }
    return ch;
}

char toLower(char ch) {
    if (isUpper(ch) == true) {
        return ch + ('a' - 'A');
    }
    return ch;
}

int main() {
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);

    //Upper Check
    if (isUpper(ch) == true)
    {
        printf("The Character is UpperCase \n");
    }
    else
    {
        printf("The given Character is Not UpperCase\n");
    }
    //Lower Check
    if (isLower(ch) == true)
    {
        printf("The Character is LowerCase \n");
    }
    else
    {
        printf("The given Character is Not LowerCase\n");
    }
    //Alphabet
    if (isAlpha(ch) == true)
    {
        printf("The Character is Alphabet \n");
    }
    else
    {
        printf("The given Character is Not Alphabet\n");
    }

    //Is Space
    if (isSpace(ch) == true) {
        printf("The Character is Space \n");
    }
    else {
        printf("The Character is not Space \n");
    }

    //is Digit
    if (isDigit(ch) == true) {
        printf("The Character is Digit \n");
    }
    else {
        printf("The Character is not Digit \n");
    }

    //to Upper
    char upper = toUpper(ch);
    printf("Here is the UpperCase: %c \n", upper);

    //to Lower
    char lower = toLower(ch);
    printf("Here is the LoweCase: %c \n", lower);

}