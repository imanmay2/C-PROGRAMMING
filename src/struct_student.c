#include<stdio.h>

struct student{
    char name[100];
    int roll;
};


void display(struct student *arr,int n){
    for(int i=0;i<n;i++){
        printf("Name: %s Roll: %d\n",arr[i].name,arr[i].roll);
    }
}

int main(){
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);
    struct student arr[n];

    for(int i=0;i<n;i++){
        printf("Enter the name: ");
        scanf("%s",arr[i].name);
        printf("Enter the Roll: ");
        scanf("%d",&arr[i].roll);
    }
    
    printf("Data Added! \n");
    display(arr,n);

}