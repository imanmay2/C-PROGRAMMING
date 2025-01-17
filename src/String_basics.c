#include<stdio.h>
#include<string.h>
//function to print the each character via loop.
void printString(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}

int main(){
    // char firstName[]="Manmay";
    // char lastName[]="Anwesha";
    // printString(firstName);
    // printString(lastName);
    // printf("Enter the String : ");
    // char str[100];
    // fgets(str,100,stdin);
    // printf("Length of the String is : %d",strlen(str)-1);


    //take a password and add the salt string at the end of the password inputted from the user.
    char password[1000];
    printf("Enter the password : ");
    scanf("%[^\n]%*c",password);
    char salt[]="123";
    char copy_[1000];
    strcpy(copy_,password);
    strcat(copy_,salt);
    
    strcat(password,salt);
    printf("Salted Password generated is : %s",copy_);
}

