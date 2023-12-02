#include<stdio.h>

void inputFunc();

void diagonalNumberTriangle(int N)
{
	int i = 1;
	while (i <= N)
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
	int copySize = N;
	int count = 1;
	while (N != 0)
	{
		
		int j = 1;
		printf("*");
		while (j < N)
		{
			printf(" ");
			j = j + 1;
		}
		int seq = copySize + count;
		printf("%d \n", seq);
		N = N - 1;
		count = count + 1;
	}
}
int main()
{
	inputFunc();
}

void inputFunc()
{
	int num;
	printf("Enter the Num: ");
	scanf("%d", &num);
	if (num > 1) {
		diagonalNumberTriangle(num);
	}
	else {
		printf("Enter the Number greater than 1: \n");
		inputFunc();
	}
	
}