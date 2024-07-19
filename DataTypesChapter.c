#include <stdio.h>
#include <stdbool.h> //boolean library

int main(){
    char a = 'C'; //single character %c
    char b[] = "Bro"; //array of characters %s

    float c = 3.141592; //4 bytes(32 bits of precision) 6-7 digits %f
    double d = 3.141592653589793; //8bytes(64 bits of precision) 15-16 digits %lf

    bool e = true; //1 byte (true or false) %d

    char f = 120; //1 byte (-128 to +127) %d or %c
    unsigned char g = 255; //1 byte (0 to +255) %d or %c

    short int h = 32767; //2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; //2 bytes (0 to +65,535) %d

    int j = 2147483647;     //4 bytes(-2,147,483,648 to +2,147,483,647)
    unsigned int k = 4294967295L; //4 bytes(0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; //8bytes(-9quintillion to +9quintillion)
    //unsigned long long int m = ...

    printf("%c\n", a); //char
    printf("%s\n", b); //char
    printf("%f\n", c); //char
    printf("%lf\n", d); //char
    printf("%d\n", e); //char
    printf("%c\n", f); //char
    printf("%d\n", g); //char
    printf("%d\n", h); //char
    printf("%d\n", i); //char
    printf("%d\n", j); //char
    printf("%u\n", k); //char
    printf("%lld\n", l); //char
    //printf("%llu\n", m); //char




    return 0;
}