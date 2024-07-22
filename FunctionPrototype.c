#include <stdio.h>
void hello(char[],int); //func prototype
int main()
{
    //function prototype
    //Function declaration without a body, before main()~
    //Ensures that calls to a function are made with the correct arguments
    char name[]="Bro";
    int age = 21;

    hello(name,age);

    return 0;
}
void hello(char name[], int age)
{
    printf("\nHello %s",name);
    printf("\nYou are %d years old",age);
}