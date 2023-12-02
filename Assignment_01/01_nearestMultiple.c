#include <stdio.h>

//Declarations
void inputFunc();
void validationFunc(int n , int m);

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
int main()
{
    inputFunc();
}

void inputFunc()
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

    