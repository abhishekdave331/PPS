#include<stdio.h>

int fbc(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return (fbc(n-1)+fbc(n-2));
    }
}

void main() {
    int n, m=0, i;
    printf("enter number of terms : ");
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        printf(" %d ",fbc(m));
        m++;
    }
}