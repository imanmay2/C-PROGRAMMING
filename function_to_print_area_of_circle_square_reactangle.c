#include<stdio.h>
#include<math.h>
float circle(int rad);
float square(int side);
float rect(int l , int b);
int main()
{
    int rad,side,l,b;
    printf("Enter radius of circle,side of a square,length and breadth of the rectangle");
    scanf("%d %d %d %d",&rad,&side,&l,&b);
    circle(rad);
    square(side);
    rect(l,b);
    return 0;
}
float circle(int rad){
    printf("Area of the circle is as follows %f",3.14*rad*rad);
}
float square(int side){
    printf("Area of the square is as follows %f",side*side);
}
float rect(int l , int b){
    printf("Area of the rectangle is as follows %f",l*b);
}