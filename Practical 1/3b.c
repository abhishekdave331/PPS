#include <stdio.h>
void main()  
{  
    float x, y;  
    float sum, sub, mult, div; 
 
    printf("Input any two numbers : ");  
    scanf("%f,%f", &x, &y);  
  
    sum = x + y;  
    sub = x - y;  
    mult = x * y;  
    div = x / y;

    printf("%f + %f = %f\n", x, y, sum);  
    printf("%f - %f = %f\n", x, y, sub);  
    printf("%f * %f = %f\n", x, y, mult);  
    printf("%f / %f = %f\n", x, y, div);
   
} 
