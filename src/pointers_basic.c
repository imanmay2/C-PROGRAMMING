#include<stdio.h>
int main(){
    int age=22;
    int *ptr;
    
    ptr=&age;
    printf("%d",*ptr);
}