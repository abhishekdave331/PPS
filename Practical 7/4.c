#include<stdio.h>
void main(){
    //n1 is int.
    int n1=10;
    //p1 is pointer to int.
    int *p1=&n1;
    //p2 is pointer to pointer to int.
    int **p2=&p1;
    printf("%d using p1\n", *p1);
    printf("%d using p2", **p2);
}