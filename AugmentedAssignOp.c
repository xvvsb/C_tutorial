#include <stdio.h>

int main(){
    // augmented assignment operators = used to replace a statement where an 
                                    // operator takes a variable as one of its
                                    //arguments and then assgins the result back
                                    //to the same variable x=x+1 / x+=1
                                    
        int x=10;
        int x1=x;
        int x2=x;
        int x3=x;
        int x4=x;
        int x5=x;
        x = x + 2;
        x1+=2;
        printf("%d\n",x);
        printf("%d\n",x1);
        x=10;
        x=x-3;
        x2-=3;
        printf("%d\n",x);
        printf("%d\n",x2);
        x=10;
        x=x*4;
        x3*=4;
        printf("%d\n",x);
        printf("%d\n",x3);
        x=10;
        x=x / 5;
        x4/=5;
        printf("%d\n",x);
        printf("%d\n",x4);
        x=10;
        x= x % 2;
        x5%=2;
        printf("%d\n",x);
        printf("%d\n",x5);




    return 0;
}