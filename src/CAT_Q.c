#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Student{
    char name[50];
    int roll;
    char dept[50];
    double cgpa;
    double courses[1000];
};

void cgpa_(struct Student *arr,int n,int m){
    for(int i=0;i<n;i++){
        if(arr[i].cgpa>=9){
            printf("Name: %s , Roll: %d , Department: %s \n",arr[i].name,arr[i].roll,arr[i].dept);
        }
    }
}

void second_Part(struct Student *arr,int n,int m){
    for(int i=0;i<n;i++){
        int ct=0;
        for(int j=0;j<m;j++){
            if(arr[i].courses[j]<25){
                ct++;
            }
        }
        if(ct>0){
            printf("Name: %s , Roll: %d , Department: %s Failed Courses: %d\n",arr[i].name,arr[i].roll,arr[i].dept,ct);
        }
    }
}


void third_Part(struct Student *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].cgpa<arr[j].cgpa){
                struct Student temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }

    }

    for(int i=0;i<n;i++){
        if(!(strcmp(arr[i].dept,"CSE"))){
            printf("Name: %s CGPA: %lf\n",arr[i].name,arr[i].cgpa);
        }
    }
}

int main(){
    int n,m;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct Student *arr=(struct Student*) malloc(n*sizeof(struct Student));
    printf("Enter the number of courses of the student: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        printf("Enter name: ");
        scanf("%s",arr[i].name);

        printf("Enter roll: ");
        scanf("%d",&arr[i].roll);

        printf("Enter Department: ");
        scanf("%s",arr[i].dept);

        printf("Enter CGPA: ");
        scanf("%lf",&arr[i].cgpa);

        for(int j=0;j<m;j++){
            printf("Enter marks for course%d: ",j+1);
            scanf("%lf",&arr[i].courses[j]);
        }
    }


    cgpa_(arr,n,m);
    second_Part(arr,n,m);
    third_Part(arr,n);

    free(arr);
}