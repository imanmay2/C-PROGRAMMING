#include<stdio.h>
void sortArr(int *arr,int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

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

    //sorting the array.
    sortArr(arr,n);

    int median;
    //finding the median;
    if(n%2==0){
        median=arr[(n/2)-1];
    } else if(n%2!=0){
        int size=(int)n/2;
        median=arr[size];
    }


    //storing the moves--> 
    int sum=0;
    for(int i=0;i<n;i++){
        int moves=arr[i]-median;
        if(moves<0){
            moves=moves*(-1);
        } sum= sum+moves;
    }

    printf("The moves required are as follows : %d",sum);
}
