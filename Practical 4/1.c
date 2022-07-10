#include<stdio.h>
void main(){
    int i, a[10], sum=0;
    float avg;

    printf("Enter ten numbers : \n");
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
        sum=sum+a[i];
        avg=(float)sum/10;
    }
    printf("Sum of all ten numbers is %d.", sum);
    printf("\nAverage of all ten numbers is %.2f.", avg);
}