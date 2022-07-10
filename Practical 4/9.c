#include<stdio.h>
#include<string.h>
void main(){
    int j, counter, a, e, i, o, u, A, E, I, O, U;
    a=0, e=0, i=0, o=0, u=0;
    A=0, E=0, I=0, O=0, U=0;
    i=0; counter=0;
    char S[25];

    printf("Enter a string : ");
    gets(S);

    for(j=0; j<strlen(S); j++){
        switch(S[j]){
            case 'a' : 
            a++;
            counter++;
            break;

            case 'e' : 
            e++;
            counter++;
            break;

            case 'i' : 
            i++;
            counter++;
            break;

            case 'o' : 
            o++;
            counter++;
            break;

            case 'u' : 
            u++;
            counter++;
            break;

            case 'A' : 
            A++;
            counter++;
            break;

            case 'E' : 
            E++;
            counter++;
            break;

            case 'I' : 
            I++;
            counter++;
            break;

            case 'O' : 
            O++;
            counter++;
            break;

            case 'U' : 
            U++;
            counter++;
            break;
        }
    }

    printf("Number of values present = %d\n", counter);

    if(a!=0){
        printf("a=%d times\n", a);
    }
    if(e!=0){
        printf("e=%d times\n", e);
    }
    if(i!=0){
        printf("i=%d times\n", i);
    }
    if(o!=0){
        printf("o=%d times\n", o);
    }
    if(u!=0){
        printf("u=%d times\n", u);
    }
    if(A!=0){
        printf("A=%d times\n", A);
    }
    if(E!=0){
        printf("E=%d times\n", E);
    }
    if(I!=0){
        printf("I=%d times\n", I);
    }
    if(O!=0){
        printf("O=%d times\n", O);
    }
    if(U!=0){
        printf("U=%d times\n", U);
    }
}