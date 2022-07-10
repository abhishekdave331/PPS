#include<stdio.h>

int max(int n1, int n2, int n3) {
    int max;
    if (n1 > n2 && n1 > n3) max = n1;
    else if (n2 > n3) max = n2;
    else max = n3;
}

void main() {
    int n1, n2, n3;
    printf("enter a int : ");
    scanf("%d",&n1);
    printf("enter a int : ");
    scanf("%d",&n2);
    printf("enter a int : ");
    scanf("%d",&n3);

    int res = max(n1, n2, n3);

    printf("%d",res);
}