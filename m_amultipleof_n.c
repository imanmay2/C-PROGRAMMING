/// program to check if m is a multiple of n or not....
#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the values of m and n respectively");
    scanf("%d %d",&m,&n);
    if(n%m==0)
    {
        printf("Yes m is a multiple of n");
    }
    else
    {
        printf("No, m is not a multiple of n");
    }
    return 0;
}