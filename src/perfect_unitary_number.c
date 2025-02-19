#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int i,gcd;
    for(i=1;i<=n1 && i<=n2;i++){
        if(n2%i==0 && n1%i==0){
            gcd=i;
        }
    }

    printf("HVF/GCD is : %d",(int)gcd);
    printf("LCM is: %d",(int)(n1*n2)/gcd);
}