#include<stdio.h>
int sqNum(int n);
int _sqNum(int n);
int main(){
    int a;
    printf("Enter the number you want to enter");
    scanf("%d",&a);
    printf("Square of the number is %d\n",sqNum(a));
    printf("Number is as follows %d",a);
    printf("Square of the number is %d\n",_sqNum(&a));
    printf("Number is as follows %p",a);
    return 0;
}
int sqNum(int n){
    n=n*n;
    return n;
}
int _sqNum(int *n){
    *n=(*n)*(*n);
    return *n;
}