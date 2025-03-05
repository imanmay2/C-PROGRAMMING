#include<stdio.h>
void swap(int *arr,int size){
    int *highest=arr;
    int *secondHighest=arr;
    for(int *ptr=arr;ptr<arr+size;ptr++){
        if(*ptr>*highest){
            secondHighest=highest;
            highest=ptr;
        } else if(*ptr>*secondHighest){
            secondHighest=ptr;
        }
    }
    printf("Highest is : %d\n",*highest);
    printf("2ndHighest is : %d\n",*secondHighest);

    int temp=*highest;
    *highest=*secondHighest;
    *secondHighest=temp;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    swap(arr,n);
    

    printf("Updated Array : \n");

    //printing the array.
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    
}