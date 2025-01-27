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
        strcpy(arr[i],str);
    }


    // for(int i=0;i<n;i++){
    //     printf("%s ",arr[i]);
    // }


    //main algo
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[i],arr[j])>0){
                char temp[100];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
                // char temp[50]=arr[i];
                // arr[i]=arr[j];
                // arr[j]=temp;
            }
        }
    }


    printf("Array in reverse order is: \n");
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}