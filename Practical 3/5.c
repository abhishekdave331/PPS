#include<stdio.h>
void main()
{
    int num,i;
    float ans = 0;
    
    printf("Enter a number : ");
    scanf("%d",&num);

    for (i = 1; i < num; i++) {
        printf("1/%d + ",i);
    }
        printf("1/%d = ",num);

    while (num > 0) {
        ans = ans + (1.0/num);
        num--;
    }
    printf("%f",ans);

}
