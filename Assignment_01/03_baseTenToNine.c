#include<stdio.h>
#include <math.h>

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
int main()
{
	int num;
	printf("Enter the Number: ");
	scanf("%d", &num);
	conversionFromBaseTenToNine(num);
}