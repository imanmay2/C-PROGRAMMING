#include<stdio.h>
void find_highest(int *arr,int size){
    int *highest=arr;
    int *secondHighest=arr;
    for(int i=0;i<size;i++){
        if(arr[i]>*highest){
            secondHighest=highest;
            highest=&arr[i];
        } else if(arr[i]>*secondHighest){
            secondHighest=&arr[i];
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

    find_highest(arr,n);


    printf("Value of the array  after swapped : \n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]); 
     }
}