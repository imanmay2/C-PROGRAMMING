///accept three sides of a triangle and display it's area....///
#include<stdio.h>
#include<math.h>
int main()
{
    int s,a,b,c,A;
    printf("enter the sides of the triangle");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    A=pow((s*(s-a)*(s-b)*(s-c)),0.5);
    printf("........The area of the triangle is as follows........%d",A);
    return 0;
}