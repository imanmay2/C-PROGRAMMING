#include<stdio.h>
#include<stdlib.h>



void display(int *arr,int row,int col){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            printf("%d ",arr[i*row+j]);
        }
        printf("\n");
    }
}


int main(){
    int row=2;
    int col=3;
    int *arr=(int *)malloc(row*col*sizeof(int));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i*col+j]);
        }
    }

    display(arr,row,col);

    free(arr);
}