#include<stdio.h>
void main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);

    if(n<0){
        printf("Given number is negative.");
    }
    else if(n>0){
        printf("Given number is positive");
    }
    else{
        printf("Given number is zero.");
    }
}