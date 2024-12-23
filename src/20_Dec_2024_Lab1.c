// // Q1. Write a program to take name,age and check eligiblity for voting.

// #include<stdio.h>
// int main(){
//     int age;
//     char name[100];
//     printf("Enter the name and age of the user :");
//     scanf("%s %d",&name,&age);
//     if(age>=18){
//         printf("%s is eligible for vote.",name);
//     }
//     else{
//         printf("%s is not eligible for vote",name);
//     }
//     return 0;
// }



// // Write a program for checking whether the accepted number is positive,negative or 0.
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     if(num>0){
//         printf("%d is Positive.",num);
//     }
//     else if(num<0){
//         printf("%d is Negative.",num);
//     }
//     else{
//         printf("%d is Zero.",num);
//     }
//     return 0;
// }



// Write a program for find the maximum of 3 numbers using nested-if.
#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter the 3 numbers : ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d is the maximum one.",num1);
        }
    } else if(num2>num3){
        printf("%d is the maximum one.",num2);
    }
    else{
        printf("%d is the maximum one. ",num3);
    }
}