#include<stdio.h>
void main() 
{
    int num, ans = 1,pn;
    printf("Enter a number : ");
    scanf("%d",&num);

    pn = num;

    for (num; num > 0; --num ) {
        ans*=num;
    }
    printf("The Factorial of %d is %d.",pn,ans);
}