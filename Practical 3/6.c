#include<stdio.h>
#include<math.h>
void main()
{
    int num, temp, sum = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;

    while(num != 0) {
        // sum+=(pow(num%10,3));
        sum = sum + ((num%10)*(num%10)*(num%10));
        num/=10;
    }

    if (sum == temp) {
        printf("%d is Armstrong number.",temp);
    } 
    else {
        printf("%d is not Armstrong number.",temp);
    }
}