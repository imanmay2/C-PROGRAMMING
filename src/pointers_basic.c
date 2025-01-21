//Swap 2 numbers using pointers;

// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     int a=3,b=5;
//     swap(&a,&b);
//     printf("a is : %d and b is %d",a,b);
// }



// Print the average, sum and product of 3 numbers and print inside the main function.

#include<stdio.h>
void pointer_(int *a,int *b,int *c,int *avg,int *sum,int *pro){

    *sum=((*a)+(*b)+(*c));
    *pro=(*a)*(*b)*(*c);
    *avg=*sum/3;

}
int main(){
    int a=2,b=2,c=2,avg=0,sum=0,pro=1;
    pointer_(&a,&b,&c,&avg,&sum,&pro);
    printf("Sum is : %d\n",sum);
    printf("Product is : %d\n",pro);
    printf("Average is : %d\n",avg);

}