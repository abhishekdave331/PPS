#include<stdio.h>

void arrayUpdate(int nums[10]) {
    int i;
    for (i=0; i<10; i++) {
        nums[i]+=100;
    }
}

void main() {
    int nums[10];
    int i;
    for (i=0; i<10; i++) {
        printf("enter a int : ");
        scanf("%d",&nums[i]);
    }
    arrayUpdate(nums);
    for (i=0; i<10; i++) {
        printf("%d ",nums[i]);
    }
}