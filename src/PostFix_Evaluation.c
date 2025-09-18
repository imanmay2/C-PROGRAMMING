// Evaluation of a postfix expression 

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

char check(char ch){
    char dig[]="0123456789";
    char op[]="+-*/";

    for(int i=0;i<strlen(dig);i++){
        if(ch==dig[i]){
            return 'd';
        }
    }

    for(int i=0;i<strlen(op);i++){
        if(ch==op[i]){
            return 'o';
        }
    }
    return 'n';
}

int main(){
    char str[100];
    int arr[1000];

    //assuming a valid expression is entered.
    printf("Enter the expression: \n");
    fgets(str,sizeof(str),stdin);
    printf("Expression entered is : \n");
    printf("%s\n",str);
    for(int i=0;i<strlen(str);i++){
        if(check(str[i])=='d'){
            int num=str[i]-'0';
            push(arr,num);
        }else if(check(str[i])=='o'){
            int ct=0;
            int a,b;
            for(int j=0;j<2;j++){
                if(ct==0){
                    a=pop(arr);
                    ct++;
                }else if(ct==1){
                    b=pop(arr);
                }
            }
            int val;
            if(str[i]=='+'){
                val=b+a;
            }else if(str[i]=='-'){
                val=b-a;
            }else if(str[i]=='*'){
                val=b*a;
            }else if(str[i]=='/'){
                val=b/a;
            }

            push(arr,val);
        }
        
    }
    printf("The evaluation of the postfix expression is : %d",pop(arr));
}