#include<stdio.h>
void main ()
{
    int num,sum = 0,i;
    printf("Enter a number : ");
    scanf("%d",&num);

    i = num;

    while(num != 0) {
        sum+=(num%10);
        num/=10;
    }
    printf("%d is sum of all digits of %d.",sum,i);
}
