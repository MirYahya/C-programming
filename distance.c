#include<stdio.h>
#include<math.h>
void main()
{
    int x1,y1,x2,y2,distance;
    printf("enter the value");
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("enter the distance between two points=%d",distance);
}
