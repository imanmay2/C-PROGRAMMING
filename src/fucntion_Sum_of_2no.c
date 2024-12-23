//program to create a function Sum and add 2 numbers.
#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}
int sum(int a,int b){
    printf(" Sum of two numbers are %d",a+b);
}