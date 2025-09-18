#include<stdio.h>
#include<string.h>

int k=-1;

int isEmpty(){
    return k==-1;
}


void push(char arr[],int data){
    k++;
    arr[k]=data;
}

int pop(char arr[]){
    if(isEmpty()){
        printf("Stack is empty!\n");
        return -1;
    }

    return arr[k--]; //popped the peek element from the stack.
}

int checkPrecedence(char ch){
    if(ch=='-'){
        return 1;
    } else if(ch=='+'){
        return 2;
    }else if(ch=='/'){
        return 3;
    }else if(ch=='*'){
        return 4;
    }else if(ch=='^'){
        return 5;
    }
    return -1;
}



char check(char ch){
    char op[]="^*/+-";
    int ascii=(int)ch;

    if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
        return 'a';
    } else{
        for(int i=0;i<strlen(op);i++){
            if(ch==op[i]){
                return 'o';
            }
        }
    } return 'n';
}

void reverseString(char str[100],char str1[100]){
    int len=strlen(str);
    for(int i=0;i<strlen(str);i++){
        if(str[len-1-i]=='('){
            str1[i]=')';
            continue;
        } if(str[len-1-i]==')'){
            str1[i]='(';
            continue;
        }
        str1[i]=str[len-1-i];
    }
    str1[len]='\0';
}

void infix_to_postfix(char str[100],char arr[1000],char res[100]){
    int p=0;
    for(int i=0;i<strlen(str);i++){
        if(check(str[i])=='a'){
            // printf("%c",str[i]);
            
            res[p++]=str[i];
        }else if(check(str[i])=='o'){
            //operator
            if(checkPrecedence(arr[k])>checkPrecedence(str[i])){
                while(!isEmpty() && checkPrecedence(arr[k])>checkPrecedence(str[i])){
                    // printf("%c",pop(arr));
                    res[p++]=pop(arr);
                    
                }
                push(arr,str[i]);
            }else{
                push(arr,str[i]);
            }
        } else if(str[i]=='('){
            push(arr,str[i]);
        }else if(str[i]==')'){
            while(!isEmpty() && arr[k]!='('){
                // printf("%c",pop(arr));
                res[p++]=pop(arr);
            }
            pop(arr);
        }
    }
    while(!isEmpty()){
        // printf("%c",pop(arr));
        res[p++]=pop(arr);
    }
    res[p]='\0';
}



int main(){
    char str[100];
    printf("Enter the infix expression : ");
    fgets(str,sizeof(str),stdin);
    printf("Entered expression is : \n");
    printf("%s\n",str);
    int len=strlen(str);
    if(len>0 && str[len-1]=='\n'){
        printf("True\n");
        str[len-1]='\0';
    }
    char arr[1000];

    char res[100];
    char str1[100]; //first reverse
    char str2[100];

    reverseString(str,str1);
    printf("%s\n",str1);
    infix_to_postfix(str1,arr,str2);
    printf("%s\n",str2);
    reverseString(str2,res);
    printf("Prefix of the expression is : %s",res);



}