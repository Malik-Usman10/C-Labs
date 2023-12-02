#include <stdio.h>
#include <math.h>
#include <stdbool.h>
//Declarations TASK O1
void taskOneInitializer();
void validationFunc(int n , int m);
void nearestMultiple(int n, int m);
//Declarations TASK O2
void conversioNFromBaseSevenToTen();
//Declarations TASK O3
void taskThreeInitializer();
void conversionFromBaseTenToNine(int baseTen);
//Declarations TASK O4
void taskFourInitializer();
void diagonalNumberTriangle(int num);
//Declarations TASK O5
void taskFiveInitializer();
void digitFrequency(int num);
//Declarations TASK O6
int taskSixInitializer();
bool isValid(int num, int start, int end);
int getLength();
int getWidth();
void calculateArea(int length, int width);
void displayArea(int area);


int main()
{
    // taskOneInitializer();
    // conversioNFromBaseSevenToTen();
    //  taskThreeInitializer();
    //  taskFourInitializer();
    taskFiveInitializer();
    // taskSixInitializer();
}

void taskOneInitializer()
{
    int n, m;
    printf("Enter a integer n: ");
    scanf("%d", &n);
    printf( "Enter a integer m: ");
    scanf("%d", &m);
    validationFunc(n, m);
}


void validationFunc(int n , int m)
{
    if (n > m)
    {
        nearestMultiple(n,m);
    }
    else
    {
        printf("The value of %d must be greater than %d \n", n, m);
        main();
    }
}
void nearestMultiple(int n, int m)
{
        int remainder, closeInt_1, closeInt_2, temp;
        remainder =  n % m;
        if (remainder == 0 )
        {
            closeInt_1 = n - m;
            closeInt_2 = n + m;
            printf("The multiple of %d nearest to %d is : %d and %d \n", m, n, closeInt_1, closeInt_2);
        }
        else
        {
            if (remainder <= m/2)
            {
                temp = n - remainder;
                closeInt_1 = temp;
            }
            else
            {
                temp = m - remainder;
                closeInt_1 = temp + n;

            }
            printf("The multiple of %d nearest to %d is : %d\n", m, n, closeInt_1);
        }

}

//TASK 02

void conversioNFromBaseSevenToTen()
{
    int digit = 0, i = 0, result = 0;
    do
    {
        printf("Enter a Base-7 digit (0 - 6): \n");
        scanf("%d", &digit);
        if (digit != -1 && digit >= 0 && digit <= 6)
        {
            result = result + (digit * pow(7 , i));
            i++;
        }
        else if (digit == -1)
        {
            break;
        }
        else
        {
            printf("Enter the Valid Number Between 0 - 6 \n");
        }
    }
    while (digit != -1);

    printf("The equivalent number in Base-10 is: %d \n", result);
}

//TASK 03

void taskThreeInitializer()
{
	int num;
	printf("Enter the Number: ");
	scanf("%d", &num);
	conversionFromBaseTenToNine(num);
}

void conversionFromBaseTenToNine(int baseTen)
{
	int result = 0, i = 0, remainder = 0;
	while (baseTen != 0)
	{
		remainder = baseTen % 9;
		baseTen = baseTen / 9;
		result = result + remainder * pow(10, i);
		i = i + 1;
	}
	printf("The equivalent Number in Base-9 is: %d \n", result);
}

//TASK 04

void taskFourInitializer()
{
	int num;
	printf("Enter the Num: ");
	scanf("%d", &num);
	if (num > 1) {
		diagonalNumberTriangle(num);
	}
	else {
		printf("Enter the Number greater than 1: \n");
		taskFourInitializer();
	}
	
}

void diagonalNumberTriangle(int num)
{
	int i = 1;
	while (i <= num)
	{
		printf("*");
		int j = 1;
		while (j < i)
		{
			printf(" ");
			j = j + 1;
		}
		printf("%d \n", i);
		i = i + 1;
	}
	int size = num;
	int count = 1;
	while (num != 0)
	{
		
		int j = 1;
		printf("*");
		while (j < num)
		{
			printf(" ");
			j = j + 1;
		}
		int seq = size + count;
		printf("%d \n", seq);
		num = num - 1;
		count = count + 1;
	}
}

//TASK 05

void taskFiveInitializer() {
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  digitFrequency(num);
}

void digitFrequency(int num) {
  int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0,
      freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;

  while (num > 0) {
    int digit = num % 10;
    switch (digit) {
    case 0:
      freq0++;
      break;
    case 1:
      freq1++;
      break;
    case 2:
      freq2++;
      break;
    case 3:
      freq3++;
      break;
    case 4:
      freq4++;
      break;
    case 5:
      freq5++;
      break;
    case 6:
      freq6++;
      break;
    case 7:
      freq7++;
      break;
    case 8:
      freq8++;
      break;
    case 9:
      freq9++;
      break;
    }
    num /= 10;
  }

    if (freq0 > 0)
    {
    printf("Digit 0 : %d\n", freq0);
    }
    if (freq1 > 0) 
    {
    printf("Digit 1 : %d\n", freq1);
    }
    if (freq2 > 0) 
    {
    printf("Digit 2 : %d\n", freq2);
    }
    if (freq3 > 0) 
    {
    printf("Digit 3 : %d\n", freq3);
    }
    if (freq4 > 0) 
    {
    printf("Digit 4 : %d\n", freq4);
    }  
    if (freq5 > 0) 
    {
    printf("Digit 5 : %d\n", freq5);
    }  
    if (freq6 > 0) 
    {
    printf("Digit 6 : %d\n", freq6);
    }  
    if (freq7 > 0) 
    {
    printf("Digit 7 : %d\n", freq7);
    }  
    if (freq8 > 0) 
    {
    printf("Digit 8 : %d\n", freq8);
    }  
    if (freq9 > 0) 
    {
    printf("Digit 9 : %d\n", freq9);
    }
}

//Task 06

int taskSixInitializer()
{
	int length, width; 
    length = getLength();
    width = getWidth();
    calculateArea(length, width);
}

bool isValid(int num, int start, int end)
{
	if (num >= start && num <= end)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int getLength()
{
    int length, start = 5, end = 500;
	printf("Enter the length b/w 5 to 500 : ");
    scanf("%d", &length);
    if(isValid(length, start, end) == true)
    {
        return length;
        getWidth();
    }
    else 
    {
        printf("Enter the Valid Input.\n ");
        getLength();
    }
	
}
int getWidth()
{
    int width, start = 8, end = 200;
	printf("Enter the Width b/w 8 to 200 : \n");
    scanf("%d", &width);
    if(isValid(width, start, end) == true)
    {
        return width;
    }
    else 
    {
        printf("Enter the Valid Input ");
        getWidth();
    }
}
void calculateArea(int length, int width)
{
    int area = length * width;
    displayArea(area);
}
void displayArea(int area)
{
    printf("The Area of Rectangle is %d \n", area );
}







    