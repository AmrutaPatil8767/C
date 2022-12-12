#include<conio.h>
#include<stdio.h>
void main()
{
    int n,r,sum,temp;
    sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("Amrstrong number");
    else
    printf("Not Amrstrong number");

}
