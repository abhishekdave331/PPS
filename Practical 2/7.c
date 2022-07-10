#include<stdio.h>
void main()
{
    int x;
    printf("Enter the Day number:");
    scanf("%d", &x);

    switch(x){
        case 1 : printf("Week Day = Sunday");
        break;
        case 2 : printf("Week Day = Monday");
        break;
        case 3 : printf("Week Day = Tuesday");
        break;
        case 4 : printf("Week Day = Wednesday");
        break;
        case 5 : printf("Week Day = Thursday");
        break;
        case 6 : printf("Week Day = Friday");
        break;
        case 7 : printf("Week Day = Ssturday");
        break;
        default: printf("Invalid number");
    }
}