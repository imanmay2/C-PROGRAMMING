#include<stdio.h>


int partition(int arr[],int si,int ei){
    int i=si-1;//// NOTE..
    int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            //swapping only the smallest element via comparing with the pivot.
            i++;
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }

    i++;
    int temp=pivot;
    arr[ei]=arr[i];
    arr[i]=temp;

    return i;
}

void quickSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }

    int pIdx=partition(arr,si,ei);

    quickSort(arr,si,pIdx-1);
    quickSort(arr,pIdx+1,ei);

}

int main(){
    int n=6;
    int arr[]={6,3,9,8,2,5};

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}