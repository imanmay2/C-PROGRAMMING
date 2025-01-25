#include<stdio.h>
int greatest(int a,int b,int c){
    if(a>b && a>c){
        return a;
    } else if(b>c){
        return b;
    } else{
        return c;
    }
}
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    int max=greatest(a,b,c);
    printf("Greatest of the numbers is: %d",max);
}