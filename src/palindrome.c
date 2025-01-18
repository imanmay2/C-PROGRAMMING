//check whether the string is palindrome or not.


#include<stdio.h>
#include<string.h>
int isPalindrome(char *str){
    int left=0;
    int right=strlen(str)-1;
    while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}


int main(){
    char str[50];
    scanf("%s",str);
    printf("String inputted is: %s",str);
    printf("%d",isPalindrome(str));
}