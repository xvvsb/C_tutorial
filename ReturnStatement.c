#include <stdio.h>

double square(double x)
{
    return x*x;
}

int main()
{
    // x = 3.14
    double result = square(3.14);
    //returns a value back to a calling function
    printf("%lf",result);
    return 0; //0 = exit
}