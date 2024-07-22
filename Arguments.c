#include <stdio.h>

//OUTRA MANEIRA!
//void birthday(char x[],int y)
//{
//printf("\nHappy birthday dear %s!",x);
//printf("\nYou are %d years old!",y);
//}
void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!",name);
    printf("\nYou are %d years old!",age);
}
int main(){
    
    char name[] = "Bro";
    int age = 22;


    
    birthday(name,age);

    return 0;
}