#include<stdio.h>

void merge(int arr[],int si,int mid,int ei){
    int i=si;
    int j=mid+1;
    int temp[ei-si+1];
    int k=0;
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        } else{
            temp[k++]=arr[j++];
        }
    }

    while(i<=mid){
        temp[k++]=arr[i++];
    } while(j<=ei){
        temp[k++]=arr[j++];
    }

    //making changes in the original array.
    for(k=0,i=si;k<(ei-si+1);k++,i++){
        arr[i]=temp[k]; //NOTE.
    }
}

void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }

    int mid=si+(ei-si)/2;
    mergeSort(arr,si,mid); // first half of the array
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}


int main(){
    int n=6;
    int arr[]={6,3,9,5,2,8};

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}