#include <stdio.h>
#include <stdbool.h>

int main(){

     //not ! funciona como negacao
     bool sunny = true;

     if (sunny != true)  //!=true == false
        {
        printf("\nIts sunny ouside!"); 
        }
     else
     {
        printf("\nits cloudy outside!");
     }
     


    return 0;
}