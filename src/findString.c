#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the number of Strings: ");
    scanf("%d",&n);
    char arr[n][100];
    char str[100];
    for(int i=0;i<n;i++){
        printf("Enter String : ");
        scanf("%[^\n]%*c",arr[i]);
    }
    printf("Enter the String you wanna find: ");
    scanf("%[^\n]%*c",str);
    
    
    //main algo
    int f=0;
    for(int i=0;i<n;i++){
        if(str==arr[i]){
            f=1;
            printf("Found in row: %d",i+1);
            break;
        }
    } if(f==0){
        printf("Not found");
    }
}