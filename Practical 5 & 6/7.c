#include<stdio.h>

int gbl = 10;

int fct(int i) {
    static int counter = 0;
    counter++;
    
    printf("local variable : %d\n",i);
    printf("global variable : %d\n",gbl);
    printf("fct is called %d times\n",counter);
}

void main() {
    int i;
    printf("enter a number :");
    scanf("%d",&i);
    fct(i);
    fct(i);
    fct(i);
    fct(i);
    fct(i);
}