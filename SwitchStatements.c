#include <stdio.h>

int main (){

    //switch = A more efficient alternative to using many "else if" statements
        // allows a value to be tested for equality against many cases

    char grade;
    printf("\nEnter a letter grade : ");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A': //funciona como um else if
        printf("Perfect!\n");
        break;
    case 'B':
        printf("You did good!\n");
        break;
    case 'C':
        printf("You did ok!\n");
        break; 
    case 'D':
        printf("At least is not an F!\n");
        break;
    case 'F':
        printf("YOU FAILED!\n");
        break;           
    default: //funciona como um else
        printf("Please enter only valid grades");
        break;
    }



    //EXEMPLO SEM SWITCH 
    //if (grade == 'A')
    //{
        //printf("Perfect!\n");
    //}
     //else if (grade == 'B')
     //{
        //printf ("You did good\n");
     //}
     //(...)



    return 0;
}