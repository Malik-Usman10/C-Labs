#include<stdio.h>
#include <string.h>

// Functions Declarations
void sumNumbers();
void printChar();
void twoDecimalPoints();
void farenToCelsius();
void interestCalc();
void leapYear();
void greaterInt();
int charChecker();
void formatDate();
void scietificNot();
void gradeStudents();
void calculator();
void traficLight();
int factorial();
int reverseSequence();

int main()
{
    // sumNumbers();
    // printChar();
    // twoDecimalPoints();
    // farenToCelsius();
    // interestCalc();
    // leapYear();
    // greaterInt();
    // charChecker();
    // formatDate();
    // scietificNot();
    // gradeStudents();
    // calculator();
    // traficLight();
    // factorial();
    reverseSequence();
}
// Two Input Numbers and Print their Sum
void sumNumbers()
{
    int a,b;
    printf("Enter 1st Number:\n");
    scanf("%d", &a);
    printf("Enter 2nd Number:\n");
    scanf("%d", &b);
    printf("The Sum of %d and %d is: %d\n", a, b , a+b);
    // printf("%d",a+b);
}

//Reads a character and Print it
void printChar()
{
    char a;
    printf("Enter the Character:\n");
    scanf("%c", &a);
    printf("The Character you Write is %c", a);

}
// Take the floating number and print it with 2 decimal place.
void twoDecimalPoints()
{
    float a;
    printf("Enter the float Number:\n");
    scanf("%f", &a);
    printf("Float With Two Decimal Places is %.2f\n", a);
}

//Convert the Farenheit into Celsius using formula
void farenToCelsius()
{
   float f;
   printf("Enter the Temp in Farenhiet:\n");
   scanf("%f", &f);
   float celsius = (f-32)/1.8;
   printf("The Temperature in Celsius is %f\n", celsius);
}
//Interest Calculator
void interestCalc()
{
  int principalAmount = 1000; //in rupees
  float rateofinterest = 10; //in percentage
  int time= 3;   //in years
  float simpInterest = (principalAmount * rateofinterest * time ) / 100;
  printf("The Simple Interest is %.2f %%", simpInterest);
}
//Checking Leap Year
void leapYear()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
    {
       printf("%d is the leap year", year);
    }
    else if (year % 100 == 0 && year % 400 == 0 )
    {
        printf("%d is the Leap Year", year);
    }
    else
    {
        printf("%d is not Leap Year", year);
    }
}
//Take three Numbers and Prints the largest one among them
void greaterInt()
{
    int a, b, c;
    printf("Enter First Number:\n");
    scanf("%d", &a);
    printf("Enter 2nd Number:\n");
    scanf("%d", &b);
    printf("Enter 3rd Number:\n");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("The Greater Number is %d\n", a);
    }
    else if(b > a && b > c)
    {
        printf("The Greater Number is %d\n", b);
    }
    else if(c > a && c > b)
    {
        printf("The Greater Number is %d\n", c);
    }
}
//Take the Alphabet and check either it is vowel or consonant
int charChecker()
{
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};  //Array includes vowels
    char alphabet;     //User Input Alphabet     
    printf("Enter the Alphabet:\n");
    scanf("%c", &alphabet);
    int Vowel = 0;    //Return 1 if finds the vowel
    int array_length = sizeof(vowel);
    for (int i = 0; i < array_length; i++)
    {
        if (vowel[i] == alphabet)
        {
           Vowel = 1;
        //    return 1; not working
           break;
        } 
    }
    if (Vowel)
    {
        printf("%c is Vowel", alphabet);
    }
    else
    {
       printf("%c is Consonant", alphabet);
    
    }     
}
// Reads a date and print in the DD/MM/YYYY format
void formatDate()
{
    int date, month, year;
    printf("Enter the Date:\n");
    scanf("%d", &date);
    printf("Enter the Month:\n");
    scanf("%d", &month);
    printf("Enter the Year:\n");
    scanf("%d", &year);
   if (date, month < 10)
   {
     printf("The format is: 0%d/0%d/%d", date, month, year);
   }
   else
   {
    printf("The format is: %d/%d/%d", date, month, year);
   }   
}
//Read a floating Number and prints in Scientific Notation
void scietificNot()
{
    float number;
    printf("Enter Any Float Number:\n");
    scanf("%f", &number);
    printf("The Number in Scientific Notation is: %.2e", number);
}

//Program to grade the students on Marks

void gradeStudents()
{
    int studentNumber;
    int maxNumber;
    printf("Enter the Marks out of 100:\n");
    scanf("%d", &studentNumber);
    if (studentNumber >= 90 && studentNumber < 100) 
    {
        printf("Your Number is %d and Grade is A", studentNumber);
    }
    else if (studentNumber >= 80 && studentNumber <= 90 )
    {
        printf("Your Number is %d and Grade is B", studentNumber);
    }
    else if (studentNumber >= 70 && studentNumber <= 80 )
    {
        printf("Your Number is %d and Grade is C", studentNumber);
    }
    else if (studentNumber >= 60 && studentNumber <= 70 )
    {
        printf("Your Number is %d and Grade is D", studentNumber);
    }
    else if (studentNumber < 60 )
    {
        printf("Your Number is %d and Grade is F", studentNumber);
    }
}
//Build a Calculator 
void calculator()
{
    int number1, number2;
    char operator;
    printf("Enter First Number:\n");
    scanf("%d", &number1);
    printf("Enter Second Number:\n");
    scanf("%d", &number2);
    printf("Enter Operator (+, - , /, *):\n");
    scanf(" %c", &operator);
    if (operator == '*')
    {
       printf("The Muliplication of %d and %d is: %d\n", number1, number2, number1*number2);
    }
    else if (operator == '/')
    {
       printf("The Division of %d and %d is: %d\n", number1, number2, number1/number2);
    }
    else if (operator == '+')
    {
       printf("The Additon of %d and %d is: %d\n", number1, number2, number1+number2);
    }
    else if (operator == '-')
    {
       printf("The Substraction of %d and %d is: %d\n", number1, number2, number1-number2);
    }
    else
    {
        printf("Please Input Correct Number and Operators");
    }
}
//Traffic light sequences

void traficLight()
{
    char color[10];
    char colors[][20] = { "red", "yellow", "green" }; 
    char *foundColor;
    printf("Enter the Color (red, yellow, green):\n");
    scanf("%s", &color);
    // printf("%s", colors[2]);
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(colors[i], color) == 0)
        {
           foundColor = colors[i];
           break;
        }
    }
    if (foundColor == colors[0])
    {
        printf("Stop!");
    }
    else if (foundColor == colors[1])
    {
        printf("Slow Down:");
    }
    else if (foundColor == colors[2])
    {
        printf("You can Go now");
    }     
}
//factorial function
int factorial()
{
    int integer;
    int factorial = 1;
    printf("Enter the Number:\n");
    scanf("%d", &integer);
    for (int i = integer ; i > 1 ; i--)
    {
        factorial = factorial*i;    // facotial  = 1*4=4*3=12*2=24
    }
    printf("%d", factorial);
}
//Reverse the squence of the Integers
int reverseSequence()
{
    int n;
    printf("Enter the Numbers\n");
    scanf("%d", &n);
    int temp = n; 
    int reverseDigits;
    printf("Original Sequence: %d\n", n);
    while (temp != 0) {
        reverseDigits = temp % 10;
        temp = temp / 10;
        printf("%d", reverseDigits);  
    }
}



