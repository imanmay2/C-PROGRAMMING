#include<stdio.h>
int sum(int,int);
int main(){
    int (*p)(int,int)=sum;
    printf("Result is : %d",p(10,20));
}

int sum(int a,int b){
    return a+b;
}