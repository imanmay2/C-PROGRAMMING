#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char *str){
    int left=0;
    int right=strlen(str)-1;
    while(left<right){
        char temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
}

int main(){
    int n=100;
    char *str=(char*) malloc(n*sizeof(char));
    char *str_=(char*) malloc(n*sizeof(char));
    printf("Enter the string: ");
    fgets(str,n,stdin);
    strcpy(str_,str);
    reverse(str);
    // printf("Original : %s   Reversed: %s",str_,);
    if(!strcmp(str,str_)){
        printf("Pallindrome %s %s",str_,str);
    } else{
        printf("Not Pallindrome %s %s",str_,str);
    }
}