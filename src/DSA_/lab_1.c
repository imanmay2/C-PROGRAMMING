
// Q1. Addition of the 2 numbers.
#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter the numbers: ");
    scanf("%d %d",&n1,&n2);
    int *ptr1=&n1;
    int *ptr2=&n2;
    printf("The sum of the numbers: %d ",(*ptr1+(*ptr2)));
}



// Q2. Swapping 2 numbers using functions and pointers.
#include<stdio.h>
void swap(int *a,int *b){
    *a=*a+(*b);
    *b=*a-(*b);
    *a=*a-(*b);
}

int main(){
    int n1,n2;
    printf("Enter the numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The numbers entered: %d %d",n1,n2);
    swap(&n1,&n2);
    printf("\nThe numbers entered: %d %d",n1,n2);
}



// Q3. Create an array, take input from the element and check whether element present or not using pointers.
#include<stdio.h>
int findElement(int *,int,int);
void main(){
    int n;
    printf("Enter the range of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }
    int ele;
    printf("Enter the element you want to find : ");
    scanf("%d",&ele);

    int idx=findElement(arr,n,ele);
    if(idx==-1){
        printf("No such element exists in the array !! ");
        return;
    }
    printf("Element found at index : %d",idx);
}

int findElement(int *arr,int n,int ele){
    for(int i=0;i<n;i++){
        if(ele==arr[i]){
            return i;
        }
    }
    return -1;
}



//Q4.Find the largest and smallest in an array.
#include<stdio.h>
int findLargest(int *arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int findSmallest(int *arr,int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int n;
    printf("Enter the range of the array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element : ");
        scanf("%d",&arr[i]);
    }
    
    printf("Smallest Number in the array is : %d\n",findSmallest(arr,n));
    printf("Largest Number in the array is : %d",findLargest(arr,n));

}


// Q5. Calculate sum and average in an array.

// Q6. Count no. of even and odd from the array.

// Q7. Reverse an array.
#include<stdio.h>
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

void printArr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printArr(arr,n);
    reverseArr(arr,n);
    printArr(arr,n);
}


