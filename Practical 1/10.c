#include<stdio.h>

void main() 
{
    int intType;
    unsigned int unintType;
    long int longintType;
    unsigned long int unlongintType;
    short int shortintType;
    unsigned short int unshortintType;
    float floatType;
    double doubleType;
    long double longdoubleType;
    char charType;
    unsigned char uncharType;

    printf("Size of signed int = %zu and range of signed int = %s\n", sizeof(intType),  "x");
    printf("Size of unsigned int = %zu and range of unsigned int = %s\n", sizeof(unintType), "-32768 to 32767");
    printf("Size of signed long int = %zu and range of signed long int = %s\n", sizeof(longintType), "-32768 to 32767");
    printf("Size of unsigned long int = %zu and range of unsigned long int = %s\n", sizeof(unlongintType), "-32768 to 32767");
    printf("Size of short int = %zu and range of short int = %s\n", sizeof(shortintType), "-32768 to 32767");
    printf("Size of unsigned short int = %zu and range of unsigned short int = %s\n", sizeof(unshortintType), "-32768 to 32767");
    printf("Size of float = %zu and range of float = %s\n", sizeof(floatType), "-32768 to 32767");
    printf("Size of double = %zu and range of double = %s\n", sizeof(doubleType), "-32768 to 32767");
    printf("Size of long double = %zu and range of long double = %s\n", sizeof(longdoubleType), "-32768 to 32767");
    printf("Size of signed char = %zu and range of signed char = %s\n", sizeof(charType),  "y");
    printf("Size of unsigned char = %zu and range of unsigned char = %s\n", sizeof(uncharType),  "z");

}
