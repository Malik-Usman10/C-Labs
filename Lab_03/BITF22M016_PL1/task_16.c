#include<stdio.h>

int triangle();
int main()
{
    triangle();
}
int triangle()
{
    int i;
    int num = 5;
    // int limit = 5;
    for (i = 0; i < num; i++)
    {
        printf("\n");
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
    }
}

