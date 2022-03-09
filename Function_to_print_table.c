//program to create a function table and print the table of that number
#include<stdio.h>
int table(int num);
int main(){
    int num;
    printf("Enter the number to print the table of that number");
    scanf("%d",&num);
    table(num);
    return 0;
}
int table(int n){
    for(int i=1;i<=10;i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
