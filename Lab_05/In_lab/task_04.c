#include<stdio.h>
int main()
{
    int a, b, temp; 
    printf("Enter First Integer ");
    scanf("%d", a);
    temp = a;
    printf("Enter Second Integer ");
    scanf("%d", b);
    for (int i = 1; i <= b; i++)
    {
        a+= temp; 
    }
    printf("The product is: ", a );
    
}