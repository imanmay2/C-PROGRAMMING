///enter two points and display the distance between them using distance formula..///
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,D,x,y;
    printf("enter the coordinates of x-axis");
    scanf("%d %d",&x1,&x2);
    printf("enter the coordinates of y-axis");
    scanf("%d %d",&y1,&y2);
    ///Using distance formula///
    x=pow((x2-x1),2);
    y=pow((y2-y1),2);
    D=pow((x+y),0.5);
    printf("........The distance between two points is as follows........%d",D);
    return 0;
}