#include<stdio.h>
int main(){
    int n1=4,n2=2;
    int gcd=1;
    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    printf("GCD of the numbers is : %d",gcd);
}