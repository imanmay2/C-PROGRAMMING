#include<stdio.h>
int sumNatural(int n);
int main()
{
    int n;
    printf("Enter the range of the natural number");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is %d",n,sumNatural(n));
    return 0;
}
int sumNatural(int n){
    if(n==1){
        return 1;
    }
    return (sumNatural(n-1)+n);
    
}