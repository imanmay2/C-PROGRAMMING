#include<stdio.h>
#include<stdlib.h>

void display(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
int main(){
    int *arr;
    int n=5;
    arr=(int *) malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    display(arr,n);
    free(arr);
}