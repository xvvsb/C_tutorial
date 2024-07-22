#include <stdio.h>
// #include <ctype.h>
int main(){

    char unidade;
    double temp;
    printf("\nIs the temperature in (F) or (C):");
    scanf("%c",&unidade);
    //unidade = toupper(unidade); faz com que nao precise de me preocupar com as
    //variaveis em letra minuscula porque vao sempre ser convertidas em maiusculas!
    if (unidade == 'C'|| unidade == 'c') //<-ja nao usava a segunda condicao
    {
        printf("\nWhat is the temperature in C? ");
        scanf("%lf",&temp);
        temp = (temp * 1.8) + 32;
        printf("\nThe temperature in F is: %lf F",temp);
    }
    else if (unidade == 'F' || unidade == 'f')
    {
        printf("\nWhat is the temperature in F? ");
        scanf("%lf",&temp);
        temp = (temp - 32) / 1.8;
        printf("\nThe temperature in C is: %lf C",temp);
    }
    else
    {
        printf("\nInvalidInput! Choose F or C!");
    }
    
    
    return 0;
}