#include <stdio.h>
#include <string.h>

int main() {
    char str[4]="Joao";
    int xd = strlen(str);
    printf("%d",xd);

     
     for(int i = 0; i < xd -1 ; i++) 
      { 
        printf("The Character at %d Index Position = %c \n", i, str[i]); 
        } 
        return 0; 
        }
