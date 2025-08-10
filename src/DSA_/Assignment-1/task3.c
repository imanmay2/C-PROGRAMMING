#include<stdio.h>
#include<string.h>
int ct=-1;
int isEmpty(int stack[]){
    if(ct==-1){
        return 1;
    } return 0;

}

void push(int stack[],int ele){
    ct++;
    stack[ct]=ele;
}

int pop(int stack[]){
    ct--;
    return stack[ct+1];
}

char check(char key){
    char digit[10]="0123456789";
    for(int i=0;i<10;i++){
        if(key==digit[i]){
            return 'd';
        }
    }
    char operand[4]="/+-*";
    for(int i=0;i<4;i++){
        if(key==operand[i]){
            return 'o';
        }
    } return 'n';
}

int main(){
    char str[100];
    //assuming a valid string is entered.
    printf("Enter the String : ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(len>0 && str[len-1]=='\n'){
        str[len-1]='\0';
    }
    int stack[1000];
    
    //main algo
    for(int i=0;i<len;i++){
        int a,b;
        if(check(str[i])=='d'){
            int num=str[i]-'0';
            push(stack,num);
        } else if(check(str[i])=='o'){
            int count=-1;
            for(int i=0;i<2;i++){
                count++;
                if(count==0){
                    a=pop(stack);
                } else if(count==1){
                    b=pop(stack);
                }
            }

            //evaluate and store back to stack.
            if(str[i]=='+'){
                push(stack,(b+a));
            } else if(str[i]=='-'){
                push(stack,(b-a));
            } else if(str[i]=='/'){
                push(stack,(b/a));
            } else if(str[i]=='*'){
                push(stack,(b*a));
            }
        } 
    }
    printf("Evaluation of the postfix expression is: %d",pop(stack));
}