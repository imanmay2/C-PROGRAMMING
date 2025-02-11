#include<stdio.h>
void calculateSum(int *,int);
int main(){
    int row,col,height,sum=0;
    scanf("%d %d %d",&row,&col,&height);
    int arr[row][col][height];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=0;k<height;k++){
                scanf("%d",&arr[i][j][k]);
                // printf("Element entered : %d",arr[i][j][k]);
            }
        }
    }


    if(row!=col || col!=height || height!=row){
        printf("Error");
    } else{
        // for(int i=0;i<row;i++){
        //     printf("Diagonal Element found : %d",arr[i][i][i]);
        //     sum=sum+arr[i][i][i];
        // }
        // printf("Sum of the diagonal of the 3D matrix is: %d",sum);

        calculateSum((int *)arr,row);
    }
}


void calculateSum(int *arr,int row){
    int sum=0;
    for(int i=0;i<row;i++){
        int *ele=arr+(row*i)+(row*i)+(row*i);
        printf("Diagonal Element found : %d\n",*ele);
        sum=sum+(*ele);
    }
    printf("Sum of the diagonal element is : %d",sum);
}