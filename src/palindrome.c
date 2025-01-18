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

void reverseString(char *str){
    int left=0;
    int right=strlen(str)-1;
    char temp;
    while(left<right){
        temp=str[left];
        str[left]=str[right];
        str[right]=str[left];
    }
}



int main(){
    char str[50];
    scanf("%s",str);
    // printf("String inputted is: %s",str);
    // printf("%d",isPalindrome(str));

    int left=0;
    int right=strlen(str)-1;
    int maxOri=0;
    int maxRev=0;
    char ss[strlen(str)];
    while(left<right){
        strncpy(ss,str+left,right);
        if(isPalindrome(ss)){
            int count=strlen(ss);
            if(count>maxOri){
                maxOri=count;
            }
        }
        left++;
    }


    //copy and then reversing the string.
    char str2[strlen(str)];
    strcpy(str2,str);
    reverseString(str2);
    left=0;
    right=strlen(str2)-1;
    while(left<right){
        strncpy(ss,str+left,right);
        if(isPalindrome(ss)){
            int count=strlen(ss);
            if(count>maxRev){
                maxRev=count;
            }
        }
        left++;
    }


    printf("%d",(maxRev>maxOri)?maxRev:maxOri);


}