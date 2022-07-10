#include<stdio.h>

int myfunction();

int myfunction() {
    return 10;
}

void main() {
    int res = myfunction();
    printf("%d",res);
}