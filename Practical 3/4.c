#include<stdio.h>
void main()
{
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    sum = (num * (num + 1) * (2 * num + 1 )) / 6;
    
    for(i =1; i<=num;i++)
    {
        if (i != num){
        printf("%d^2 + ",i);
        }
        
        else{
        printf("%d^2 = %d ",i, sum);
        }
    }
}