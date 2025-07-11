#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the numbers: ");
    scanf("%d %d",&n1,&n2);
    int *ptr1=&n1;
    int *ptr2=&n2;
    printf("The sum of the numbers: %d ",(*ptr1+(*ptr2)));
}