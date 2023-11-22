#include<stdio.h>
void main()
{
    int n,r,l,b,s,area,peri;
    printf("n=1 for area of circle,n=2 for area of rectangle,n=3 for area of square");
    printf("enter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("enter the radius");
        scanf("%d",&r);
        area=3.14*r*r;
        peri=3.14*2*r;
        printf("area of circle=%d\n", area);
        printf("perimeter of circle=%d\n",peri);
        break;
        case 2:
        printf("enter the length and breadth");
        scanf("%d%d",&l,&b);
        area=l*b; 
        peri=2*(l+b);   
        printf("area of a rectangle=%d\n",area); 
        printf("perimeter of a rectangle=%d\n",peri);
        break;
        case 3:
        printf("enter the side of square");
        scanf("%d",&s);
        area=s*s;
        peri=4*s;
        printf("area of a square=%d\n", area);
        printf("perimeter of a square=%d\n",peri);
        break;
        default:
        printf("n not found");
    }
}