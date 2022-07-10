#include<stdio.h>

void myfunction(int n1, float n2);

void myfunction(int n1, float n2) {
    if (n1 > n2) {
        printf("passed interger is greater than passed float number");
    } else if (n2 > n1) {
        printf("passed float is greater than passed integer number");
    } else {
        printf("both numbers are equal");
    }
}

void main() {
    int n1;
    float n2;
    printf("enter an int :");
    scanf("%d",&n1);
    printf("enter a float :");
    scanf("%f",&n2);

    myfunction(n1,n2);
}