#include<stdio.h>
void reverseArr(int *arr){
    int *start=arr;
    int *end=arr;
    while(*end){
        end++;
    }
    end--;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverseArr(arr);

    printf("Array reversed is : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}