#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[50]="HEllo WOrld";
    for(int i=0;i<strlen(str);i++){
        // printf("%c",toupper(str[i]));
        printf("%c",tolower(str[i]));
        
    }
}