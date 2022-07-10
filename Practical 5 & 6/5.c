#include<stdio.h>
#include<string.h>

void stringUpper(char str[]) {
    int len = strlen(str);
    int i;
    for (i=0; i<len; i++) {
        str[i]-=32;
    }
}

void main() {
    char str[25];
    printf("enter a string : ");
    gets(str);
    stringUpper(str);
    puts(str);
}