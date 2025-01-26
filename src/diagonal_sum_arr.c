#include<stdio.h>
int main(){
    int n;
    printf("Enter the matrix size: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter element: ");
            scanf("%d",&arr[i][j]);
        }
    }


    //main algo starts here.


    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || i+j==n-1){
                sum=sum+arr[i][j];
            } 
        }
    }

    printf("Sum of the diagonal elements is : %d",sum);
}