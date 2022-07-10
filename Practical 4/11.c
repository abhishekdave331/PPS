#include<stdio.h>
#include<string.h>
void main(){
    char S1[11][11]={"Computer", "Science", "and", "Engineering"};
    char S2[10][10];
    int i;

    for(i=0; i<3; i++){
        printf("Enter string : ");
        gets(S2[i]);
    }

    for (i=0; i<4; i++)
    {
        puts(S1[i]);
    }
    
    for(i=0; i<3; i++){
        puts(S2[i]);
    }
   
}