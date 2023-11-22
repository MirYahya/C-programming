#include<stdio.h>
#include<math.h>
int main()
{
    int sum=0,digit,number,cube,originalnumber;
    printf("enter the value:");
    scanf("%d",&originalnumber);
    number=originalnumber;
    while(number!=0)
    {
        digit=number%10;
        cube=digit*digit*digit;
        sum+=cube;
        number/=10;
    }
    if(sum==originalnumber)
    {
        printf("the number is armstrong number");
    }
    else
    {
        printf("the number is not armstrong number");
        return 0;
    }
}
