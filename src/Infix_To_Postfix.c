#include<stdio.h>
#include<string.h>

int k=-1;

int isEmpty(){
    return k==-1;
}


void push(int arr[],int data){
    k++;
    arr[k]=data;
}

int pop(int arr[]){
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

int main(){
    char str[100];
    printf("Enter the infix expression : ");
    fgets(str,sizeof(str),stdin);
    printf("Entered expression is : \n");
    printf("%s\n",str);
    int arr[1000];
    for(int i=0;i<strlen(str);i++){
        if(check(str[i])=='a'){
            printf("%c",str[i]);
        }else if(check(str[i])=='o'){
            //operator
            if(checkPrecedence(arr[k])>checkPrecedence(str[i])){
                while(!isEmpty() && checkPrecedence(arr[k])>checkPrecedence(str[i])){
                    printf("%c",pop(arr));
                    
                }
                push(arr,str[i]);
            }else{
                push(arr,str[i]);
            }
        } else if(str[i]=='('){
            push(arr,str[i]);
        }else if(str[i]==')'){
            while(!isEmpty() && arr[k]!='('){
                printf("%c",pop(arr));
            }
            pop(arr);
        }
    }
    while(!isEmpty()){
        printf("%c",pop(arr));
    }

}