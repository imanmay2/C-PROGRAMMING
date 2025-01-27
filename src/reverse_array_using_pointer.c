#include<stdio.h>
void reverseArr(int *,int);
int main(){
    int n;
    printf("Enter the size of the aray: ");
    scanf("%d",&n);
    int arr[n];
    
    //inputting into the array.
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }

    printf("Reversed Array is: \n");
    reverseArr(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


void reverseArr(int *arr,int n){
    int left=0;
    int right=n-1;
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right--;
    }
}