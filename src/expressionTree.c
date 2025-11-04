#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};

struct Stack{
    int top;
    struct Node* arr[100];
};

void init(struct Stack* stack){
    stack->top=-1;
}

struct Node* createNode(char data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

void push(struct Stack* stack,struct Node* node){
    stack->arr[++stack->top]=node;
}


struct Node* pop(struct Stack* stack){

    //check
    if(stack->top==-1){
        return NULL;
    }
    return stack->arr[stack->top--];
}


int isOperator(char ch){
    return (ch=='+' || ch=='-' || ch=='/' || ch=='*');
}



void preOrder(struct Node* root){
    if(root==NULL){
        return;
    }

    printf("%c",root->data);
    preOrder(root->left);
    preOrder(root->right);
}



void inOrder(struct Node* root){
    if(root==NULL){
        return;
    }

    if(isOperator(root->data)){
        printf("(");
    }
    inOrder(root->left);
    printf("%c",root->data);
    inOrder(root->right);
    if(isOperator(root->data)){
        printf(")");
    }
}


void postOrder(struct Node* root){
    if(root==NULL){
        return;
    }

    
    postOrder(root->left);
    postOrder(root->right);
    printf("%c",root->data);


}




int main(){
    char exp[1000];
    printf("Enter the expression : ");
    scanf("%s",exp);
    struct Stack stack;
    init(&stack);
    for(int i=0;i<strlen(exp);i++){
        char ch=exp[i];
        if(isdigit(ch) || isalpha(ch)){
            struct Node* node=createNode(ch);
            push(&stack,node);
        }else if(isOperator(ch)){
            // if (stack.top < 1) { // not enough operands
            //     printf("\nError: Invalid postfix expression (too few operands before '%c')\n", ch);
            //     return 1;
            // }
            struct Node* node=createNode(ch);
            node->right=pop(&stack);
            node->left=pop(&stack);

            push(&stack,node);
        }
    }

    struct Node* root=pop(&stack);
    inOrder(root);
    
}