#include<stdio.h>
 void main()
 {
    float r;
    printf("enter the radius\n");
    float a;
    printf("enter the side of square\n");
    float c,d;
    printf("enter the length and breadth\n");
    scanf("%f",&r); 
    scanf("%f",&a);
    scanf("%f%f",&c,&d);
    float area, peri, square, squarep, rectanglea, recp;
    area=3.14*r*r;
    peri=2*3.14*r;
    printf("area of circle=%f\n", area);
    printf("perimeter of circle=%f\n",peri); 
    square=a*a;
    squarep=4*a;
    printf("area of a square=%f\n", square);
    printf("perimeter of a square=%f\n", squarep);
    rectanglea=c*d; 
    recp=2*(c+d);   
    printf("area of a rectangle=%f\n",rectanglea); 
    printf("perimeter of a rectangle=%f\n",recp);
 }   