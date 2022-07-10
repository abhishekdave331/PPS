#include<stdio.h>
void main(){
    int a[10], i, p=0, n=0, z=0;
    printf("Enter ten numbers : \n");

    for(i=0; i<10; i++){
        scanf("%d", &a[i]);

        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else{
            z++;
        }
    }

    printf("Positive numbers = %d", p);
    printf("\nNegative numbers = %d", n);
    printf("\nZero numbers : %d", z);
}