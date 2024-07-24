#include <stdio.h>

int main(){

    // while loop = checks a condition, THEN executes a 
    // block of code if condition is true 
    // do while loop = always executes a block of code once
    // then checks a condition

    int number = 0;
    int sum = 0;

    do
    {
        printf("Enter a number above 0:");
        scanf("%d", &number);
        if(number > 0){
        sum += number;
        }
    } while (number > 0);
    
    //while (number > 0)
    //{
    //    printf("Enter a # above 0: ");
    //    scanf("%d", &number);
    //    if(number > 0){
    //        sum += number;
    //    }
    
    printf("sum: %d",sum);
    

    return 0;
}