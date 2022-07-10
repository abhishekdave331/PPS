#include<stdio.h>
void main()
{
    char c;
    printf("Enter character:");
    scanf("%c", &c);


    if(c>='A' && c<='Z'){
        printf("Entered Character is Capital Letter.");
    }
    if(c>='a' && c<='z'){
        printf("Entered Character is Small Letter.");
    }
    if(c>='0' && c<='9'){
        printf("Entered Character is Digit.");
    }


    if(c>='A' && c<='Z'){
        printf("Entered Character is Capital Letter.");
    }
    else{
        if(c>='a' && c<='z'){
            printf("Entered Character is Small Letter.");
        }
        else{
            if(c>='0' && c<='9'){
                printf("Entered Character is Digit.");
            }
        }
    }


    if(c>='A' && c<='Z'){
        printf("Entered Character is Capital Letter.");
    }
    else if(c>='a' && c<='z'){
        printf("Entered character is Small Letter.");
    }
    else if(c>='0' && c<='9'){
        printf("Entered Character is Digit.");
    }
}