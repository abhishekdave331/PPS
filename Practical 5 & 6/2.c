#include <stdio.h>

void myfunction(int n1, float n2, char ch)
{
    int i;
    for (i=0; i<8; i++){
        printf("%c", ch);
    }
    printf("\n%d + %.3f = %.3f\n\n", n1, n2, n1 + n2);
    for (i=0; i<8; i++){
        printf("%c", ch);
    }
}

void main()
{
    int n1;
    float n2;
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    printf("Enter an integer : ");
    scanf("%d", &n1);
    printf("Enter a floating point : ");
    scanf("%f", &n2);

    myfunction(n1, n2, ch);
}