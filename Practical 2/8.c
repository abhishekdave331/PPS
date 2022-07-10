#include<stdio.h>
void main()
{
    char p;
    printf("Enter character from word \"COMPUTER\": ");
    scanf("%c", &p);

    switch(p){
        case 'C':
        printf("C is first character in word \"COMPUTER\"");
        break;
        case 'O':
        printf("O is second character in word \"COMPUTER\"");
        break;
        case 'M':
        printf("M is third character in word \"COMPUTER\"");
        break;
        case 'P':
        printf("P is fourth character in word \"COMPUTER\"");
        break;
        case 'U':
        printf("U is fifth character in word \"COMPUTER\"");
        break;
        case 'T':
        printf("T is sixth character in word \"COMPUTER\"");
        break;
        case 'E':
        printf("E is seventh character in word \"COMPUTER\"");
        break;
        case 'R':
        printf("R is eighth character in word \"COMPUTER\"");
        break;
        default:
        printf("Character %d is not present in word \"COMPUTER\".", p);
    }
}