#include<stdio.h>
#include<string.h>
void main(){
    int i;
    char C1[25]={'a', 'a', 'a', 'a', 'a'};
    char S1[25]="aaaaa", C2[25], S2[25];

    printf("Enter the elements of C2 : ");
    scanf("%s", &C2);
    printf("Enter elements of S2 : ");
    scanf("%s", &S2);

    printf("char C1[25] = ");
    for(i=0; i<strlen(C1); i++){
        printf("%c", C1[i]);
    }
    printf("\nchar C2[25] = ");
    for(i=0; i<strlen(C2); i++){
        printf("%c", C2[i]);
    }
    printf("\nS1=%s", S1);
    printf("\nS2=%s", S2);
}