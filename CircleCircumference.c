#include <stdio.h>
#include <math.h>


int main(){
    int r;
    printf("\nWhat is the radius of the circle?");
    scanf("%d",&r);
    const double PI = 3.141592;
    //printf("%f",PI);
    double C = 2*PI*r;
    printf("\nThe circunference is %f.",C);
    double A = PI * pow(r,2);
    printf("\nThe area of the circunference is %f.",A);




    return 0;
}