#include<stdio.h>
#include<string.h>

void printStr(char str[][100],int n){
    for(int i=0;i<n;i++){
        printf("%s ",str[i]);
    }
}

int main(){
    char str[4][100];

    for(int i=0;i<4;i++){
        fgets(str[i],sizeof(str[i]),stdin);
        int l=strlen(str[i])-1;
        if(l>0){
            str[i][l]='\0';
        }
    }

    printStr(str,4);
    
}