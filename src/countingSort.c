#include<stdio.h>

int max(int arr[],int n){
    int m=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>m){
            m=arr[i];
        }
    }
    return m;
}

void sort(int arr[],int n){
    int m=max(arr,n);
    
    int freq[m+1];


    //important.
    for(int i=0;i<m+1;i++){
        freq[i]=0;
    }


    for(int i=0;i<n;i++){
        int ele=arr[i];
        freq[ele]++;
    }

    for(int i=0;i<m;i++){
        int k=freq[i];
        while(k>0){
            printf("%d ",i);
            k--;
        }
    }
}

int main(){
    int arr[]={1,2,1,4,3,6,10};
    printf("Counting sort applied is: \n");
    sort(arr,8);
    
}