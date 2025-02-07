// You are using GCC
#include<stdio.h>
void mergeArr(int *arr1,int *arr2,int *arr3,int n1,int n2,int n3){
    for(int i=0;i<n1;i++){
        arr3[i]=arr1[i];
    }
    int ct=n1;
    for(int i=0;i<n2;i++){
        arr3[ct]=arr2[i];
        ct++;
    }
}
int main(){
    int n1,n2;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[n2]);
    }
    
    
    int arr3[n1+n2];
    mergeArr(arr1,arr2,arr3,n1,n2,n1+n2);
    
    for(int i=0;i<(n1+n2);i++){
        printf("%d ",arr3[i]);
    }
}