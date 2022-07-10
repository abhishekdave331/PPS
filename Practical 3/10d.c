#include <stdio.h>
void main()
{
    int i , j ;
    for(i=4 ;i>=1 ;i--)
    {
        for(j=i;j>0;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}