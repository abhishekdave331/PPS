#include<stdio.h>
void main()
{
    int i=0,sum = 0;

    while (i <= 25)
    {
        i++;
        if(i%2==0 || i%5==0 || i%6==0)
        {
            continue;
        }
        sum+=i;
    }
    
    printf("Sum is %d.",sum);
}