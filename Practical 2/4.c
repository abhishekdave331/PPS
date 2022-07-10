#include<stdio.h>
void main()
{
    int p, q, r;
    printf("Enter first number:");
    scanf("%d", &p);
    printf("Enter second number:");
    scanf("%d", &q);
    printf("Enter third number:");
    scanf("%d", &r);


    if(p>q){
        if(p>r){
            printf("%d is the greatest number.", p);
        }
        else{
            printf("%d is the greatest number.", r);
        }
    }
    else{
        printf("%d is the greatest number.", q);
    }


    if(p>q && p>r){
        printf("%d is the greatest number.", p);
    }
    else if(q>p && q>r){
        printf("%d is the greatest number.", q);
    }
    else{
        printf("%d is the greatest number.", r);
    }
}