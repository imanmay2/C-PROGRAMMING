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
// #include<stdio.h>
// int main(){
//     int num1,num2,num3;
//     printf("Enter the 3 numbers : ");
//     scanf("%d %d %d",&num1,&num2,&num3);
//     if(num1>num2){
//         if(num1>num3){
//             printf("%d is the maximum one.",num1);
//         }
//     } else if(num2>num3){
//         printf("%d is the maximum one.",num2);
//     }
//     else{
//         printf("%d is the maximum one. ",num3);
//     }
// }




// //Write a program for printing the week in a day using SWITCH STATEMENT.
// #include<stdio.h>
// int main(){
//     int day;
//     printf(" Enter the day from 1-7 : ");
//     scanf("%d",&day);
//     switch(day){
//         case 1:
//         printf("Monday");
//         break;
//         case 2:
//         printf("Tuesday");
//         break;
//         case 3:
//         printf("Wednesday");
//         break;
//         case 4:
//         printf("Thrusday");
//         break;
//         case 5:
//         printf("Friday");
//         break;
//         case 6:
//         printf("Saturday");
//         break;
//         case 7:
//         printf("Sunday");
//         break;
//         default:
//         printf("INVALID NUMBER ENTERED ! ENTER BETWEEN 1-7 . ");
//         break;
//     }
// }



// Write the program to input a number of 3 digit and print the sum of last and first digit of the number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int ct=0,sum=0;
    while(num!=0){
        int r=num%10;
        if(ct==0 || ct==2){    
            sum+=r;
        }
        num=(int) num/10;
        ct++;
    }
    
    printf("Sum of 1st and last digit is : %d",sum);
    return 0;
}