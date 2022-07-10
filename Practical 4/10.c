#include<stdio.h>
#include<string.h>
void main(){
    int i, k;
    char a[25]="Aaaaa", b[25]="BbBbb", c[25], d[25];

    printf("Length of string a = %d\n", strlen(a));
    strcpy(d,b);
    printf("string d = %s\n", d);

    strcat(a,b);
    printf("String a after strcat(a,b) = %s\n", a);

    k=strcmp(d,b);
    (k==1) ? printf("strings b and d are equal.") : printf("Strings b and d are distind.\n");

    printf("string a in lowercase : %s\n", strlwr(a));
    printf("string a in uppercase : %s\n", strupr(a));
    printf("string a reserved order : %s\n", strrev(a));

    printf("Enter string : ");
    gets(c);
    puts(c);
}