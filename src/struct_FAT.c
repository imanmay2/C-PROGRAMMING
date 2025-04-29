#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union Student{
    struct {
        int roll;
        char name[100];
        double marks[3];
        double total;
    };
};


void display(union Student *arr,int n){
    for(int i=0;i<n;i++){
        printf("Student%d \n",i+1);
        printf("Name : %s\n",arr[i].name);
        printf("Roll : %d\n",arr[i].roll);
        for(int j=0;j<3;j++){
            printf("Marks%d : %lf\n",j+1,arr[i].marks[j]);
        }
        printf("Total Marks : %lf\n",arr[i].total);
    }
}

int main(){
    int n;
    printf("Enter the no. of student : ");
    scanf("%d",&n);

    union Student *arr=(union Student*) malloc(n*sizeof(union Student));
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",arr[i].name);
        printf("Enter roll: ");
        scanf("%d",&arr[i].roll);
        double sum=0;
        for(int j=0;j<3;j++){
            printf("Enter marks for subject%d",j+1);
            scanf("%lf",&arr[i].marks[j]);
            sum=sum+arr[i].marks[j];
        }
        arr[i].total=sum;
    }

    display(arr,n);

    
}