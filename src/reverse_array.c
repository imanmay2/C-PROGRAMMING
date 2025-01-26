#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }


    

    // main algo to reverse the array within the array.
    int left=0;
    int right=sizeof(arr)/sizeof(arr[0])-1;
    printf("%d \n",right);
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;


        left++;
        right--;
    }


    printf("The Reserved array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}