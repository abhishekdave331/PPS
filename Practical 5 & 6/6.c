#include<stdio.h>

void arrayAdd(int a[3][3], int b[3][3], int c[3][3]) {
    int i, j;
    for (i=0; i!=3; i++) {
        for (j=0; j!=3; j++) {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
}

void main() {
    int i, j, a[3][3], b[3][3], c[3][3];
    for(i=0; i!=3; i++) {
        for (j=0; j!=3; j++) {
            printf("enter a number : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i!=3; i++) {
        for (j=0; j!=3; j++) {
            printf("enter a number : ");
            scanf("%d",&b[i][j]);
        }
    }
    arrayAdd(a,b,c);
    for (i=0; i!=3; i++) {
        for (j=0; j!=3; j++) {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }
}