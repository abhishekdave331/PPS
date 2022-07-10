#include<stdio.h>
void main()
{
    int X;
    R:
    printf("Enter the number:");
    scanf("%d", &X);

    if(X%5==0){
        printf("%d is divisibe by 5.", X);
    }
    else{
        printf("%d is not divisible by 5.\n", X);
        goto R;
    }
}