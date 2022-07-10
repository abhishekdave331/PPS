#include<stdio.h>
void main(){
    int A[10], i, a, b;
    printf("Enter the ten numbers : \n");
    for(i=0; i<10; i++){
        scanf("%d", &A[i]);
    }
    a=A[0];
    b=A[0];
    for(i=1; i<10; i++){
        if(a<A[i]){
            a=A[i];
        }
        else if(b>A[i]){
            b=A[i];
        }
    }
    printf("Maximum number = %d\n", a);
    printf("Minimum number = %d\n", b);
}