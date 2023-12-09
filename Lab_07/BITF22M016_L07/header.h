//Fucntion Prototypes
int truncate(float num);
int round(float num);
int ceiling(float num);
int floor(float num);


int truncate(float num)
{
    return num / 1;
}

int round(float num)
{
    if (num <= 0)
    {
        num = num - 0.5;
        return num / 1;
    }
    else if ( num > 0 )
    {
        num = num + 0.5;
        return num / 1;
    }   
}
int floor(float num)
{
    if (num < 0) {
        num = num - 1;
        return num / 1;
    }
    else if (num >= 0 ) {
        return num / 1 ;
    }
}

int ceiling(float num)
{
    if (num <= 0)
    {
        return  num / 1;
    }
    else if (num > 0 )
    {
        num = num + 1;
        return num / 1; 
    }
}