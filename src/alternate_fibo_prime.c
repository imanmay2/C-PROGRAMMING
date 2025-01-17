// You are using GCC
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[n];
    
    //taking input
    for(int i=0;i<n;i++){
        scanf("%[^\n]%*c",arr[i]);
    }
    
    //string to be find.
    char str[1000];
    scanf("%[^\n]%*c",str);
    
    
    //main algo
    bool f=false;
    for(int i=0;i<n;i++){
        if(str==arr[i]){
            printf("Found in row: %d",i+1);
            f=true;
            break;
        }
    }
    if(f==false){
        printf("Not found");
    }
}