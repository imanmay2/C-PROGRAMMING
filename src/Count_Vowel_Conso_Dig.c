
#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter the String : ");
    // fgets(str,100,stdin);
    scanf("%[^\n]%*c",str);
    puts(str);
    int arr[]={0,0,0,0};  // Chronological order----> Vowels, Consonants,Digits,Special Character.
    for(int i=0;i<strlen(str);i++){
       if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
        arr[0]++;
       } else if(str[i]=='0' || str[i]=='1' || str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9'){
        arr[2]++;
       } else if(isalpha(str[i])!=0){
        arr[1]++;
       } else{
        arr[3]++;
       }
    }


    printf("Count of Vowels : %d\n",arr[0]);
    printf("Count of Consonants: %d\n",arr[1]);
    printf("Count of Digits: %d\n",arr[2]);
    printf("Count of Special Characters: %d\n",arr[3]);
    return 0;
}