#include<stdio.h>
void main()
{
    int x;
    printf("Enter your marks:");
    scanf("%d", &x);

    if(x>=80 && x<=100){
        printf("You have got distinction.");
    }
    else if(x>=60 && x<=79){
        printf("You have got first class.");
    }
    else if(x>=40 && x<=59){
        printf("You have got second class.");
    }
    else if(x<40){
        printf("You are failed.");
    }
}