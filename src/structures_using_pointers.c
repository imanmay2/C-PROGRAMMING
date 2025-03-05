#include<stdio.h>
struct Student{
    char name[100];
    int roll;
};
int main(){
    int n;
    printf("Enter the range of the array : ");
    scanf("%d",&n);
    struct Student s[n];
    for(int i=0;i<n;i++){
        scanf("%s",s[i].name);
        //%[^\n]%*c
    }


    //printing the data stored in the struct.
    for(int i=0;i<n;i++){
        printf("%s\n",s[i].name);
    }
}