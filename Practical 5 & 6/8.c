#include<stdio.h>

int fact(int num) {
    if (num == 0) return 1;
    int ans = num * fact(num-1);
    return ans;
}

void main() {
    int num;
    printf("enter a number to find its factorial : ");
    scanf("%d",&num);
    int res = fact(num);
    printf("%d",res);
}