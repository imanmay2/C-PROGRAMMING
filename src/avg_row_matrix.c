// Average of each row matrix.

#include<stdio.h>
int main(){
    int row,cols;
    printf("Enter the row and column of the matrix : ");
    scanf("%d %d",&row,&cols);
    int arr[row][cols];
    //inputting the array 
    for(int i=0;i<row;i++){
        for(int j=0;j<cols;j++){
            printf("Enter element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        int s=0;
        for(int j=0;j<cols;j++){
            s=s+arr[i][j];
        }
        printf("The average of %d row is : %d",i,s);
    }
}