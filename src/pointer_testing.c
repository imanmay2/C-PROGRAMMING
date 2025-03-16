#include<stdio.h>

void print2DArray(int *arr,int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",*(arr+col*j+i));
        }
        printf("\n");
    }
}


int main(){
    //print a 2D array using pointer arithmetic.

    int row=3,col=3;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    print2DArray((int *)arr,row,col);
}

