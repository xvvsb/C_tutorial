#include <stdio.h>
#include <math.h>

int main(){
    //c=raiz(a^2 + b^2)
    //NAO ESQUECER DOUBLE = %lf
    double A,B,C;
    printf("\nWhat is the value of 'a' leg?");
    scanf("%lf",&A);
    printf("\nWhat is the value of 'b' leg?");
    scanf("%lf",&B);
    C = sqrt(pow(A,2)+pow(B,2));
    
    printf("The value of hypotenuse is:%lf",C);



    return 0;
}