#include<stdio.h>
void series(int *arr,int num){
    int n=num;
    int count_num=0;
    while(n!=0){
        int r=n%10;
        arr[count_num]=r;
        count_num++;
        n=(int)n/10;
    }
    int start=0;
    int end=count_num-1;
    //Reverse the array.
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }


    int ct=count_num;
    while(1){
        int sum=0;
        for(int i=count_num-ct;i<count_num;i++){
            sum=sum+arr[i];
        }
        arr[count_num]=sum;
        count_num++;
        if(sum==num){
            printf("Number found in the Sequence\n");
            for(int i=0;i<count_num;i++){
                printf("%d ",arr[i]);
            }
            break;
        }
        else if(sum>num){
            printf("Number not found in the Sequence.\n");
            for(int i=0;i<count_num;i++){
                printf("%d ",arr[i]);
            }
            break;
        }
    }
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int arr[100];
    series(arr,num);
}