#include <stdio.h>
int main(){
    int integer;
    int factorial = 1;
    printf("Enter the Number:\n");
    scanf("%d", &integer);
    for (int i = integer ; i > 1 ; i--)
    {
        factorial = factorial*i; 
    }
    printf("%d", factorial);

}