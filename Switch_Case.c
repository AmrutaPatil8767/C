#include<stdio.h>
#include<conio.h>
void main()
{
    int num=3;
    switch(num)
    {
        case 1:
            printf("Value is ONE");
            break;
        case 2:
            printf("Value is TWO");
            break;
        case 3:
            printf("Value is THREE");
            break;
        default:
            printf("Invalid Value");
    }
    getch();
}
