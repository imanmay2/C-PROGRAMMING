#include<stdio.h>
#include<strings.h>

int main(){
    char strArr[100][50];
    char str[50];
    for(int i=0;i<5;i++){
        scanf("%s",str);
        strcpy(strArr[i],str);
    }

    for(int i=0;i<5;i++){
        printf("%s\n",strArr[i]);
    }
}