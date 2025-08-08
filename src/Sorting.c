#include<stdio.h>



void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}




void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}


void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minpos=i;
        for(int j=i+1;j<n;j++){
            //finding the smallest number from the unsorted array.
            if(arr[minpos]>arr[j]){
                minpos=j;
            }
        }

        //swapping 
        int temp=arr[i];
        arr[i]=arr[minpos];
        arr[minpos]=temp;
    }
}


int partition(int arr[],int si,int ei){
    int pivot=arr[ei];
    int i=si-1;
    for(int j=si;j<ei;j++){
        //swapping the small elements to the beginning of the array.
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }

    i++;
    //swapping with the pivot
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

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n=5;
    int arr[]={5,4,3,2,1};

    quickSort(arr,0,n-1);
    printf("Quick Sort ->\n");
    printArr(arr,n);

}