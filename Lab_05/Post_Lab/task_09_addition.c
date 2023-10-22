#include <stdio.h>

int main() {
    int a, b, num1, num2;
    printf("Enter the First Integar: ");
    scanf("%d", &a);
    printf("Enter the Second Integar: ");
    scanf("%d", &b);
    num1 = a;
    num2 = b;
    if (b > 0) {
        while (b--) {
            a++;
        }
    }
    else if (b < 0) {
        while (b++) {
            a--;
        }
    }
    printf("The addition of %d and %d is: %d\n", num1, num2, a);
}
