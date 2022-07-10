#include<stdio.h>
void main(){
    char str[5], i;
    char *p;
    int n;

    printf("Enter your string : ");
    gets(str);
    printf("Enter the position of the character to be changed : ");
    scanf(" %d", &n);

    p=&str[n-1];

    printf("Enther a new character : ");
    scanf(" %c", &i);

    *p=i;
    puts(str);
}