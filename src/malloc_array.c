#include<stdio.h>
#include<stdlib.h>
void displayArr1(int **arr,int rows,int cols){
    for(int i=0;i<cols;i++){
        for(int j=0;j<rows;j++){
            printf("%d ",*(*(arr+j)+i));
        }
        printf("\n");
    }
}




int main(){
    int rows=4;
    int cols=3;
    int **arr=(int**) malloc(rows*sizeof(int*));
    for(int i=0;i<rows;i++){
        arr[i]=(int*) malloc(cols*sizeof(int));
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }

    displayArr1(arr,rows,cols);


    for(int i=0;i<rows;i++){
        free(arr[i]);
    }
    free(arr);

}