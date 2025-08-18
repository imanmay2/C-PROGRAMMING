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

int findMax(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

void countSort(int arr[],int n){
    int max=findMax(arr,n)+1;
    int arr1[max];
    for(int i=0;i<max;i++){
        arr1[i]=0;
    }
    for(int i=0;i<n;i++){
        arr1[arr[i]]++;
    }


    //traversing the arr1 to get the sorted array.
    for(int i=0;i<max;i++){
        while(arr1[i]!=0){
            printf("%d ",i);
            arr1[i]--;
        }
    }
}


void printArr(int arr[],int n){
    printf("Elements in the array are : \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}



int partition(int arr[],int si,int ei){
    int pivot=arr[ei];
    int i=si-1; //creating space

    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
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
    quickSort(arr,si,pIdx-1); //left
    quickSort(arr,pIdx+1,ei); //right
}


void merge(int arr[],int si,int mid,int ei){
    int k=0;
    int k1=ei-si+1;
    int temp[k1];
    int i=si;
    int j=mid+1;

    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp[k++]=arr[i++];
        } else if(arr[i]>arr[j]){
            temp[k++]=arr[j++];
        }
    }

    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=ei){
        temp[k++]=arr[j++];
    }

    for(int k=0,i=si;k<k1;k++,i++){
        arr[i]=temp[k];
    }
}


void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mid=si+(ei-si)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);
    merge(arr,si,mid,ei);
}


int main(){
    int arr[]={4,2,5,3};
    mergeSort(arr,0,4);
    printArr(arr,4);
}