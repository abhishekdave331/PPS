#include<stdio.h>
void main(){
    int n1=0;
    float n2=0;
    char ch=0;
    int *p1=&n1;
    float *p2=&n2;
    char *pch=&ch;

    printf("Enter an integer : ");
    scanf("%d", p1);
    printf("Enter a floating number : ");
    scanf(" %f", p2);
    printf("Enter a character : ");
    scanf(" %c", pch);

    printf("%d\n", *p1);
    printf("%f\n", *p2);
    printf("%c\n", *pch);
}