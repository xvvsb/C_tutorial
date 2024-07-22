#include <stdio.h>

int findMax(int x, int y)
{
    //if(x>y)
    //{
    //    return x;
    //}
    //else
    //{
    //    return y;
    //}
    return (x>y) ? x : y;
// IF cond+dentro// ELSE dentro
}
int main(){

    //ternary: shortcut to if else assigning/returning a value
    //(condition)? value if true : value if false

    int max = findMax(3,4);

    printf("%d", max);

    return 0;
}