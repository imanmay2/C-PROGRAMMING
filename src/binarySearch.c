#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];


    //taking input from the user.
    for(int i=0;i<n;i++){
        printf("Enter element: ");
        scanf("%d",&arr[i]);
    }



    int num;
    printf("Enter the number to be searched: ");
    scanf("%d",&num);


    //binary search algorithm to be implemented over here.
    int f=0;
    int left=0;
    int right=sizeof(arr)/sizeof(arr[0]);
    while(left<=right){
        int mid=(int) (left+right)/2;
        // printf("%d ",mid);
        if(num==arr[mid]){
            printf("Match Found at index %d",mid);
            f=1;
            break;
        } else if(num>arr[mid]){
            left=mid+1;
        } else if(num<=arr[mid]){
            right=mid-1;
        }
    }

    if(f==0){
        printf("Element not found in the array.");
    }
}