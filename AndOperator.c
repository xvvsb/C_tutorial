#include <stdio.h>
#include <stdbool.h>

int main(){
        //&&(and) checks if 2 conditions are true
        float temp = 25;
        bool sunny = false;

        if(temp >= 0 && temp <=30 && sunny==1) {
            printf("\nThe weather is good!");
        }
        else
        {
            printf("\nThe weather is bad!");
        }
        


    return 0;
}