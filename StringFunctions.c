#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Bro";
    char string2[] = "Corno";

    strlwr(string1);      //converte para minusculas
    strupr(string1);      //converte para maiusculas
    strcat(string1, string2); //junta str1+str2 sem espacos
    strncat(string1, string2, 1); //junta str2 + str2[0]
    strcpy(string1, string2); //copia conteudo da string2 para string1
    strncpy(string1, string2, 1);//copy n caracteres da string2 para a string1

    strset(string1, '?'); //altera todos a string1 com ?
    strnset(string1,'!',1); //altera o n character para !
    strrev(string1); //reverse string
    int result = strlen(string1); //retorna valor do tamanho em int
    int result = strcmp(string1,string2); //compara se todos os char sao iguais
    int result = strncmp(string1,string2,1); //string compares n chars
    int result = strcmpi(string1,string1); //string compare all(ignoram caps)
    int result = strnicmp(string1,string1,1);//compare n chars (ignora caps)
    printf("%s",string1);
    printf("%d",result);

    if (result == 0){
        printf("same strings");
    }
    else{
        printf("diff strings");
    }

    return 0;
}