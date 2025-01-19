//check whether the string is palindrome or not.

//banana ---> 
//acacacab -->



#include<stdio.h>
#include<string.h>


void reverseString(char *str){
    int left=0;
    int right=strlen(str)-1;
    char temp;
    while(left<right){
        temp=str[left];
        str[left]=str[right];
        str[right]=temp;
        left++;
        right--;
    }
}


int isPalindrome(char *str){
    int left=0;
    int right=strlen(str)-1;
    char revStr[strlen(str)];
    strcpy(revStr,str);
    reverseString(revStr);
    int i=0;
    while(1)
    {
        printf("%s -> %s \n",str,revStr);
        printf("%c -> %c \n",*(str+i),*(revStr+i));
        // if(*(str+i) != *(revStr+i)){
        //     return 0;
        // }
        i++;
        if(i>=strlen(str)){
            return 1;
        }
    }
    return 0;
}



int main(){
    char str[]="banana\n";
    // String str="banana"; //best 

    // scanf("%[^\n]%*c",str);
    // fgets(str,50,stdin);
    // printf("%s",str);
    
    // printf("String inputted is: %s",str);
    // printf("%d",isPalindrome(str));

    int left=0;
    int right=strlen(str)-1;
    int maxOri=0;
    int maxRev=0;
    char ss[strlen(str)];

    while(left<right-1){
        strncpy(ss,str+left,right);
        // printf("%s",ss);
        // printf("%d",isPalindrome(ss));
        if(isPalindrome(ss)){
            int count=strlen(ss);
            if(count>maxOri){
                maxOri=count;
            }
        }
        left++;

    }



    // //copy and then reversing the string.
    // char str2[strlen(str)];
    // strcpy(str2,str);
    // reverseString(str2);
    // left=0;
    // right=strlen(str2)-1;
    // while(left<right){
    //     strncpy(ss,str+left,right);
    //     if(isPalindrome(ss)){
    //         int count=strlen(ss);
    //         if(count>maxRev){
    //             maxRev=count;
    //         }
    //     }
    //     left++;
    // }


    // printf("%d %d\n",maxOri,maxRev);
    printf("%d",(maxRev>maxOri)?maxRev:maxOri);


}