
//Q1. Addition of the 2 numbers.
// #include<stdio.h>
// int main(){
//     int n1,n2;
//     printf("Enter the numbers: ");
//     scanf("%d %d",&n1,&n2);
//     int *ptr1=&n1;
//     int *ptr2=&n2;
//     printf("The sum of the numbers: %d ",(*ptr1+(*ptr2)));
// }


//Q2. Swapping 2 numbers using functions and pointers.
#include<stdio.h>
void swap(int *a,int *b){
    *a=*a+(*b);
    *b=*a-(*b);
    *a=*a-(*b);
}

int main(){
    int n1,n2;
    printf("Enter the numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The numbers entered: %d %d",n1,n2);
    swap(&n1,&n2);
    printf("\nThe numbers entered: %d %d",n1,n2);
}