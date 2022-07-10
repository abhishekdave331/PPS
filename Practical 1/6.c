#include <stdio.h>

void main() 
{
 int n;
 float p, r, I;

 printf("Enter Amount  :");
 scanf("%f",&p);

 printf("Enter No of Years :");
 scanf("%d",&n);

 printf("Enter Rate  :");
 scanf("%f",&r);

 I = (p*r*n)/100;

 printf("Interest = %f",I);
}