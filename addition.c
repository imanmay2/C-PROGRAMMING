#include<stdio.h>
int main(){
    int n1,n2,s=0;
    printf("enter two numbers");
    scanf("%d %d", &n1 , &n2);
    s=n1+n2;
    printf("%d + %d = %d", n1, n2 ,s);
    return 0;
}