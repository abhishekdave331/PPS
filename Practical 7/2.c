#include<stdio.h>
void main(){
    int nums[5], i;

    for(i=0; i!=5; i++){
        printf("Enter a number : ");
        scanf("%d", &nums[i]);
    }

    int *p=&nums[0];

    for(i=0; i!=5; i++){
        if(*(p+i)%2==0)*(p+i)+=100;
    }

    for(i=0; i!=5; i++){
        printf("%d\n", *(p+i));
    }
}