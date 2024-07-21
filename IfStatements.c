#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18) 
    {
        printf("You are now signed up!");
    }
    else if (age == 0)
    {
        printf("You cant sign up! You were just born!");
    }
    
    else if (age < 0)
    {
        printf("You havent been born yet!");
    }  
    else {
        printf("You are too young to sign up!");
    }
    // o else if basicamente sobrepoe o else

    return 0;
}