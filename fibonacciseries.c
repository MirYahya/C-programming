#include<stdio.h>
void main()
{
    int i,n,a=0,b=1,number;
    printf("enter the number");
    scanf("%d",&n);
    printf("fibonacci series");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        number=a+b;
        a=b;
        b=number;
    }
}