#include<stdio.h>
#include<math.h>
<<<<<<< HEAD
int circle(int rad);
int square(int side);
int rect(int l , int b);
=======
float circle(int rad);
float square(int side);
float rect(int l , int b);
>>>>>>> 4aee897716d3e14889eccd5c5ed69941c548aebe
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
int circle(int rad){
    printf("Area of the circle is as follows %f\n",3.14*rad*rad);
}
int square(int side){
    printf("Area of the square is as follows %f\n",side*side);
}
int rect(int l , int b){
    printf("Area of the rectangle is as follows %f\n",l*b);
}