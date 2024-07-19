#include <stdio.h>
int main() {
    /* variable = Allocated space in memory to store a value.
                We refer to a variable's name to access the stored value.
                That variable now behaves as if it was the value it contains.
                But we need to declare that type of data we are storing.
    */
   int x; //declarar inteiro
   x = 123; // inicializar.0
   int y = 321; //declaracao + inicializacao

   int age = 21; //integer
   float gpa = 2.05; //floating point number
   char grade = 'C'; //single character
   char name[] = "Bro"; //Array of characters

    //imprimir variavel: %s -> string + especificar nome da variavel
    printf("Hello %s\n",name);
   //imprimir variavel: %d -> variavel decimal + especificar nome da variavel 
   printf("You are %d years old\n",age);
   //imprimir variavel: %c -> caracter + especificar nome da variavel 
   //%0.2f para mostrar so 2 casas decimais a direita
   printf("Your average grade is %c\n", grade);
    printf("Your GPA is %0.2f\n",gpa);

    return 0;
}