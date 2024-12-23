// write a program to check whether it is an amicable number or not.
#include<stdio.h>
int main()
{
    int x,y,i,j;
    int s1=0,s2=0;
    printf("Enter the numbers you want to enter");
    scanf("%d,%d",&x,&y);
    for(i=1;i<x;i++){
        if(x%i==0){
            s1=s1+i;
        }
    }
    for(j=1;j<y;j++){
        if (y%j==0)
        {
            s2=s2+j;
        }
        
    }
    if(s1==y && s2==x){
        printf("Amicable Number");
    }
    else{
        printf("not amicable number");
    }
}