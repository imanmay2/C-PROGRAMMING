#include<stdio.h>
#include<stdlib.h>
void reverse(int *,int n);

int main(){

    int *arr;
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    arr=(int *)  malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    reverse(arr,n);

    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }

    free(arr);
    
}


void reverse(int *arr,int n){
    int left=0;
    int right=n-1;
    while(left<right){
        int temp=*(arr+left);
        *(arr+left)=*(arr+right);
        *(arr+right)=temp;

        left++;
        right--;
    }
}