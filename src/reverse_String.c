#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseStr(char *str){
    int start=0;
    int end=strlen(str)-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;

        start++;
        end--;
    }
}


int main(){
    int n=100;
    char *str=(char*) malloc(n*sizeof(str));  //char str[100];
    printf("Enter the String: ");
    scanf("%s",str);
    printf("String you have entered : %s\n",str);
    reverseStr(str);
    printf("Reversed String is : %s\n",str);
    free(str);
}