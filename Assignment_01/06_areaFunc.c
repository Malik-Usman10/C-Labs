#include<stdio.h>
#include <stdbool.h>

bool isValid(int num, int start, int end);
int getLength();
int getWidth();
void displayArea(int area);
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

int main()
{
	int length, width; 
    length = getLength();
    width = getWidth();
    printf("%d %d", length , width);
    calculateArea(length, width);
}