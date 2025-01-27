#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Enter the number of strings : ");
    scanf("%d",&n);
    char arr[n][50];
    for(int i=0;i<n;i++){
        char str[50];
        printf("Enter the String: ");
        scanf("%s",str);
        strncpy(arr[i],str);
    }

    //main algo
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;i++){
            if(!strcmp(arr[i],arr[j])){
                char temp[50];
                strncpy(temp,arr[i]);
                strncpy(arr[i],arr[j]);
                strncpy(arr[j],temp);
                
            }
        }
    }


    printf("Array in reverse order is: \n");
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}