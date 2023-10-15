#include<stdio.h>
#include<math.h>


int main()
{
    int userinput;
    while (userinput != 7)
    {
        int selection;
        printf("Select a Operation to perform in C calculator:\n");
        printf("1 Addition\t\t  2 Substracton\n");
        printf("3 Multiplication\t  4 Division\n");
        printf("5 Square \t\t  6 Square Root\n");
        printf("7 Exit\n");
        scanf("%d", &userinput);
        switch (userinput)
        {
        case 1:
            int num1 , num2;
            printf("You select Addition\n");
            printf("Enter First Number:\n");
            scanf("%d", &num1);
            printf("Enter Second Number:\n");
            scanf("%d", &num2);
            printf("Addition of Two Numbers is: %d\n", num1 + num2);
            break;
        case 2:
            printf("You select Substraction\n");
            int s1 , s2;
            printf("Enter First Number:\n");
            scanf("%d", &s1);
            printf("Enter Second Number:\n");
            scanf("%d", &s2);
            printf("Substraction of Two Numbers is: %d\n", s1 - s2);
            break;
        case 3:
        int m1 , m2;
            printf("You select Multiplication\n");
            printf("Enter First Number:\n");
            scanf("%d", &m1);
            printf("Enter Second Number:\n");
            scanf("%d", &m2);
            printf("Multiplication of Two Numbers is: %d\n", m1 * m2);
            break;
        case 4:
            printf("You select Division\n");
            int d1 , d2;
            printf("Enter First Number:\n");
            scanf("%d", &d1);
            printf("Enter Second Number:\n");
            scanf("%d", &d2);
            printf("Division of Two Numbers is: %d\n", d1 / d2);
            break;
        case 5:
            printf("You select Square\n");
            double sq1;
            printf("Enter First Number:\n");
            scanf("%lf", &sq1);
            double square = pow(sq1, 2);
            printf("Square of Two Numbers is: %1.lf\n", square);
            break;
        case 6:
            printf("You select Square root\n");
            int num;
            printf("Enter First Number:\n");
            scanf("%d", &num);
            printf("Square root of a Number is: %f\n", sqrt(num));
            break;
        case 7:
            printf("Program Exit\n");
            break;
        }
    }
    

}