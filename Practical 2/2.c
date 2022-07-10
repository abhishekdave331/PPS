#include<stdio.h>
void main()
{
    int m;
    printf("Enter your age:");
    scanf("%d", &m);


    if(m>=18){
        printf("You are eligible to vote.");
    }
    else{
        printf("You are not eligible to vote. Wait for %d more years.", 18-m);
    }


    if(m>=18){
        printf("You are eligible to vote.");
    }
    else if(m<18)
    {
        printf("You are bot eligible to vote. Wait for %d more years", 18-m);
    }
}