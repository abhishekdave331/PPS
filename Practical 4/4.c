#include<stdio.h>
void main(){
    int a[10], b[10], i, n;
    printf("Enter the number of element (1-10) : ");
    scanf("%d", &n);
    printf("Enter the %d elements of array a[%d] : \n", n, n);
    for(i=0; i<n; i++){
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    printf("\nCopied Array b[%d]", n);
    for(i=0; i<n; i++){
        b[i]=a[i];
        printf("\nb[%d]", i, b[i]);
    }
}