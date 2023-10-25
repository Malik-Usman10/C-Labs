#include <stdio.h>

int main() {
    int a, b, num1, num2;
    printf("Enter the First Integar: ");
    scanf("%d", &a);
    printf("Enter the Second Integar: ");
    scanf("%d", &b);
    num1 = a;
    num2 = b;

    while (b > 0) {
            b--;
            a++;
    }
    while (b < 0) {
            b++;
            a--;
    }
    printf("The addition of %d and %d is: %d\n", num1, num2, a);
}
