#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter the character: ");
    scanf("%[^\n]%*c",str);
    printf("String you have entered is: %s",str);
    int sp=1;
    for(int i=0;i<strlen(str);i++){
        if(!strcmp(&str[i],"")){
            sp++;
        }
    }

    printf("Count of Words is: %d\n",sp);
    printf("Count of Characters: %lu",strlen(str));
}