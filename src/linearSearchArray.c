#include<stdio.h>
int main(){
    int n;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    int arr[n];

    //inputting aray.
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched for: ");
    int num;
    scanf("%d",&num);


    //searching for the num
    int f=0;
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            printf("Match Found at index %d",i);
            f=1;
            break;
        }
    }
    if(f==0){
        printf("Oops ! number not found in the array.");

    }
}