#include <stdio.h>
#include <string.h>

int main(){

    //while loop = repeats a section of code possibly
    //unlimited times. While some condition remais true
    // a while loop might not execute at all

    char name[25];

    while (strlen(name) == 0)
    {
        printf("\nYou did not entern your name!");
        printf("\nWhats your name?: ");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }
    
    printf("Hello %s", name);


    return 0;
    //no while se a primeira condicao for falsa ele nao 
    //entra no loop, enquanto que no for ele entra no loop
    //pelo menos uma vez
}   