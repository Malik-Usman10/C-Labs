#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//Function Decleration Here

void displayMenu();
int calcFunc(int choice);
bool isInRange(int num);
double addition(double num1, double num2); 
double subtraction(double num1, double num2); 
double multiplication(double num1, double num2); 
double division(double num1, double num2); 
double square(double num); 
double squareRoot(double num); 
double ceilNum(double num); 
double floorNum(double num);
int main()
{
    int choice = 0;
    while(choice != 9)
    {
      displayMenu();
      scanf("%d", &choice);
      calcFunc(choice);
    }
}
void displayMenu()
{
  printf("Select the Operation To Perform The calculation in C calculator:\n");
  printf("1 Additon\t  2 Substraction\n");
  printf("3 Multiplication  4 Division\n");
  printf("5 Square \t  6 Square Root\n");
  printf("7 Ceil\t\t  8 Floor\n");
  printf("9 Exit\n");
  printf("*********************************************************************\n");
  printf("Please Make a Choice: ");
}
//Validation Function
bool isInRange(int choice)
{
  return (choice >= 1 && choice <= 9);
}
//Calulator Choice Switch
int calcFunc(int choice)
{
  if(isInRange(choice) == true)
  { 
    double num1, num2, result, num;
    switch(choice)
    {
      case 1:
        printf("You Choose: Addition\n");
        printf("Enter the First Number:\n");
        scanf("%lf", &num1);
        printf("Enter the Second Number:\n");
        scanf("%lf", &num2);
        result  = addition(num1, num2);
        printf("Result is %.2lf\n", result);
        break;
      case 2:
        printf("You Choose: Subtraction\n");
        printf("Enter the First Number:\n");
        scanf("%lf", &num1);
        printf("Enter the Second Number:\n");
        scanf("%lf", &num2);
        result = subtraction(num1, num2);
        printf("Result is %.2lf\n", result);
        break;
      case 3:
        printf("You Choose: Multiplication\n");
        printf("Enter the First Number:\n");
        scanf("%lf", &num1);
        printf("Enter the Second Number:\n");
        scanf("%lf", &num2);
        result = multiplication(num1, num2);
        printf("Result is %.2lf\n", result);
        break;
      case 4:
        printf("You Choose: Division\n");
        printf("Enter the First Number:\n");
        scanf("%lf", &num1);
        printf("Enter the Second Number:\n");
        scanf("%lf", &num2);
        if(num2 == 0)
        {
          printf("Division by Zero is not Valid !   \n");
        }
        else
        {
          result = division(num1, num2);
          printf("Result is %.2lf\n", result);
        }
        break;
      case 5:
        printf("You Choose: Square\n");
        printf("Enter the Number:\n");
        scanf("%lf", &num);
        result = square(num);
        printf("Result is %.2lf\n", result);
        break;
      case 6:
        printf("You Choose: Square Root\n");
        printf("Enter the Number:\n");
        scanf("%lf", &num);
        result = squareRoot(num);
        printf("Result is %.2lf\n", result);
        break;
      case 7:
        printf("You Choose: Ceil\n");
        printf("Enter the Number:\n");
        scanf("%lf", &num);
        result = ceilNum(num);
        printf("Result is %.2lf\n", result);
        break;
      case 8:
        printf("You Choose: Ceil\n");
        printf("Enter the Number:\n");
        scanf("%lf", &num);
        result = floorNum(num);
        printf("Result is %.2lf\n", result);
        break;
      case 9:
        printf("You Chose: Exit");
        break;
    }
    printf("*********************************************************************\n");

  }
  else
  {
    printf("Enter the Number between 1 - 7:\n");
  }
}

double addition(double num1, double num2)
{
  return num1 + num2;
}
double subtraction(double num1, double num2)
{
  return num1 - num2;
}
double multiplication(double num1, double num2)
{
  return num1 * num2;
}
double division(double num1, double num2)
{
  return num1 / num2;
}
double square(double num)
{
  return pow(num, 2);
}
double squareRoot(double num)
{
  return sqrt(num);
}
double ceilNum(double num)
{
  return ceil(num);
}
double floorNum(double num)
{
  return floor(num);
}
