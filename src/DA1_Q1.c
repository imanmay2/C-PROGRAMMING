#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the total number of parking slots: ");
    scanf("%d",&n);
    int arr[]={0,0,0};   //order : ----> cars,bikes, heavy vehicles.
    for(int i=1;i<=n;i++){
        if(i%5==0){
            printf("H ");
            arr[2]++;
        }
        else if(i%2!=0){   //condition for odd.
            printf("C ");
            arr[0]++;
        }  else if(i%2==0){
            printf("B ");
            arr[1]++;
        } 

        if(i%10==0){
            printf("\n");
        }
    }
    

    printf("\n");
    printf("\n");

    printf("Total Cars: %d\n",arr[0]);
    printf("Total Bikes: %d\n",arr[1]);
    printf("Total Heavy Vehicles: %d\n",arr[2]);

}