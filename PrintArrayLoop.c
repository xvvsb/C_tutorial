#include <stdio.h>
#include <string.h>

int main(){

    double prices[]={5.0,10.0,15.0,20.0,25.0};
    
    
    for (int i = 0; i < sizeof(prices)/sizeof(prices); i++)
    {
        printf("%d",prices[i]);
    }
    



    return 0;
}