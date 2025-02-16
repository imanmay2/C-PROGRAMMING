#include<stdio.h>
typedef int Integer;

struct address{
    char city[100];
    Integer pin;
};

struct book{
    char name[10];
    float price;
    int pages;
    struct address a1;
};

void display(struct book *arr,Integer n){
    for(int i=0;i<n;i++){
        printf("%s,%f,%d,%s,%d\n",arr[i].name,arr[i].price,arr[i].pages,arr[i].a1.city,arr[i].a1.pin);
    }
}

int main(){
    Integer n;
    printf("Enter the range : ");
    scanf("%d",&n);
    
    struct book arr[n];
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",arr[i].name);
        printf("Enter price: ");
        scanf("%f",&arr[i].price);
        printf("Enter pages");
        scanf("%d",&arr[i].pages);
        printf("Enter the city : ");
        scanf("%s",arr[i].a1.city);
        printf("Enter the PIN Code : ");
        scanf("%d",&arr[i].a1.pin);
    }

    printf("You have entered : \n");
    display(arr,n);
}