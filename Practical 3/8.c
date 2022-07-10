#include<stdio.h>
void main()
{
    int i,num,sum = 0;
    for (i = 1; i != 10; i++) {
        
        printf("Enter a number : ");
        scanf("%d",&num);

        if (num < 0) break;

        sum += num;
    }

    printf("The sum of entered numbers is %d.",sum);
}