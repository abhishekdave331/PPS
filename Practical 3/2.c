#include<stdio.h>
void main()
{
    int num,r_num = 0,i;
    printf("enter a num : ");
    scanf("%d",&num);
    while (num != 0)
    {
        r_num = (r_num*10) + (num%10);
        num=num/10;
    }
    printf("R num %d",r_num);
    
}