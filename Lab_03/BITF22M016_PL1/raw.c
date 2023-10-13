#include<stdio.h>
#include<string.h>
int main()
{
    char lights[10];
    printf("Enter the Color:\n");
    scanf("%s", &lights);
    if (lights == "red")
    {
        printf("Stop");
    }
    else if (lights == "yellow")
    {
        printf("Slow Down");
    }
    else if (lights == "green")
    {
        printf("Go");
    }    
}