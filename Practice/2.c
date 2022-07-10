//Square of the numbers..

#include<stdio.h>
void main(){
    int n, sum=0;
    for(n=1; n<11; n++){
        sum=n*n;
        printf("The square of %d = %d\n", n, sum);
    }
}