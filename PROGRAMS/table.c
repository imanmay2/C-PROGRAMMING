//accept a number from the user and generate the table..
#include<stdio.h>
int main(){
    int n;
    printf("enter a number for generating table");
    scanf("%d", &n);
    for(int i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",n,i,(n*i));
        
        
    }
    return 0;
}