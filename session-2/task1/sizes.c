
/*
 * Use the sizeof() operator to examine memory use 
 * of primitive types char,int,float
 */

#include <stdio.h>

int main( void ) {

    char testChar;
    int testInt;
    float testFloat;

    short int testshort;
    long int testlong;
    double testdouble;

    printf("Char size is %ld bytes\n",sizeof(testChar));
    printf("Int size is %ld bytes\n",sizeof(testInt));
    printf("Float size is %ld bytes\n",sizeof(testFloat));

    printf("short int size is %ld bytes\n",sizeof(testshort));
    printf("long int size is %ld bytes\n",sizeof(testlong));
    printf("double size is %ld bytes\n",sizeof(testdouble));
    return 0;
}
