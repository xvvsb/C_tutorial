#include <stdio.h>
#include <math.h>

int main(){

    char op;
    double a, b;

    printf("\nChoose: '+'-1 '-'-2 '*'-3 '/'-4 'exp'-5 'sq.root'-6 'log10'-7:");
    scanf("%c", &op);
    switch (op)
    {
    case '1':
        printf("\nChoose the 1st number of addiction:");
        scanf("%lf",&a);
        printf("\nChoose the 2nd number of addiction:");
        scanf("%lf",&b);
        double r = a + b;
        printf("\nRESULT: %lf",r);
        
        break;
    case '2':
        printf("\nChoose the 1st number of subtraction:");
        scanf("%lf",&a);
        printf("\nChoose the 2nd number of subtraction:");
        scanf("%lf",&b);
        r = a - b;
        printf("\nRESULT: %lf",r);
        
        break;
    case '3':
        printf("\nChoose the 1st number of multiplication:");
        scanf("%lf",&a);
        printf("\nChoose the 2nd number of multiplication:");
        scanf("%lf",&b);
        r = a * b;
        printf("\nRESULT: %lf",r);
        
        break;
    case '4':
        printf("\nChoose the 1st number of divison:");
        scanf("%lf",&a);
        printf("\nChoose the 2nd number of division:");
        scanf("%lf",&b);
        r = a / b;
        printf("\nRESULT: %lf",r);
        
        break;        

    case '5':
        printf("\nChoose the base number:");
        scanf("%lf",&a);
        printf("\nChoose the exponential:");
        scanf("%lf",&b);
        r = pow(a,b);
        printf("\nRESULT: %lf",r);
        
        break;

    case '6':
        printf("\nChoose the number:");
        scanf("%lf",&a);
        if (a < 0)
        {
            printf("Choose a positive number!");
            break;
        }
        
        r = sqrt(a);
        printf("\nRESULT: %lf",r);
        
        break;    
    case '7':
        printf("\nChoose the base number:");
        scanf("%lf",&a);
        if (a > 0){
            r = log10(a);
        }
        else
        {
            printf("Choose a positive number!");
            break;
        }
        
        printf("\nRESULT: %lf",r);
        break;    

    default:
    {
        printf("\nChoose a valid operation!");
        break;
    }
    }
    return 0;
}