//Demonstrate the for loop..

#include<stdio.h>
void main(){
    int n, sum=0;
    for(n=1; n<=10; n++){
        sum=sum+n;
    }
    printf("Sum=%d", sum);
}