#include <stdio.h>
int whichTriangle(int s1, int s2, int s3)
{
    if (s1 == s2 && s1 == s3)
    {
        printf("The Triangle is Equaliteral");
    }
    else if (s1 == s2 || s1 == s3 || s2 == s3)
    {
        printf("The Triangle is Isosceles");
    }
    else if (s1 != s2 && s1 != s3)
    {
        printf("The Triangle is Scalene");
    }
}
int main ()
{   int s1, s2, s3;

    printf("Enter the Measurement of 1 side of Triangle:\n");
    scanf("%d", &s1);
    printf("Enter the Measurement of 2 side of Triangle:\n");
    scanf("%d", &s2);
    printf("Enter the Measurement of 3 side of Triangle:\n");
    scanf("%d", &s3);
    whichTriangle(s1, s2, s3);



}