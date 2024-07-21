#include <stdio.h>

int main(){

    //Arithmetic Operators:

    // + addiction
    // - subtraction
    // * multiplication
    // / division
    // % modulos 
    // ++ increment
    // -- decrement

    int x=5;
    int y=2;
    
    // Neste caso o resultado seria 2.5 mas como z é inteiro o resultado
    // que aparece no terminal é de 2
    int z = x / y;
    printf("%d\n",z);
    // Como obter o resultado corretamente?
    //neste caso o valor continua a ser truncado...
    float zx = x / y;
    printf("%f\n",zx);
    //opt1: mudar y int->float/double
    int x1 = 5;
    float y1 = 2;
    float z1 = x1/y1;
    printf("%f\n",z1);
    //opt2:manter x e y ints ->transformar y em float/double na equacao
    int x2 = 5;
    int y2 = 2;
    float z2 = x2 / (float)y2;
    printf("%f\n",z2);
    //////////////////////////////////////////////////////////////////////////
    //% dá o resto de cada divisao
    int xm = 4;
    int ym = 2;
    int zm = xm % ym;
    printf("%d\n",zm);
    ///////////////////////////////////////////////////////////////////////////
    // ++ e --
    xm++;
    ym--;
    printf("%d\n",xm);
    printf("%d\n",ym);
    return 0;
}