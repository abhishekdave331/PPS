#include<stdio.h>

int myfunction(int,float);

int myfunction(int n1, float n2) {
    return n1;
}

void main() {
    int res = myfunction(3,1.0);
    printf("%d",res);
}