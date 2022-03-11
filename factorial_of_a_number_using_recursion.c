#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("The factorial of the %d number is %d",n,fact(n));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    return (fact(n-1)*n);
}
