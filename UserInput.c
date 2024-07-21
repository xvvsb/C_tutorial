#include <stdio.h>
#include <string.h> //bib. para trabalhar com strings

int main(){

    char name[25]; //bytes
    int age;

    printf("\nWhats your name?");
    //scanf("%s",&name); //nao usar \n nos scanf
    // desta maneira o output final vai sair com um paragrafo...
    fgets(name, 25, stdin);
    // retirar esse paragrafo
    name[strlen(name)-1] = '\0';
    //ou ainda podiamos usar gets(name), que para de ler quando encontrar '\0'
    //pelo que percebi o fgets é mais seguro, mas é mais para ler de ficheiros
    //e temos de criar:name[strlen(name)-1] = '\0'; para encontrar o fim!!
    printf("How old are you?");
    scanf("%d", &age); //& = endereco da nossa variavel

    printf("\nHello %s, how are you?",name);
    printf("\nYou are %d years old.", age);
    
    //se o input conter espaços nao podemos usar o scanf
    //temos de usar o fgets()


    return 0;
}