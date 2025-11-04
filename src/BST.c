#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int data){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

struct Node* insertBST(struct Node* root,int value){
    if(root==NULL){
        root=createNode(value);
        return root;
    }

    if(value > root->data){
        root->right=insertBST(root->right,value);
    } else{
        root->left=insertBST(root->left,value);
    }

    return root;
}


void search(struct Node* root,int value){
    if(root==NULL){
        printf("%d is not found.",value);
        return;
    }

    if(value==root->data){
        printf("%d is found.",value);
        return;
    }

    else if(value>root->data){
        search(root->right,value);
    } else{
        search(root->left,value);
    }
}


int main(){
    int n;
    printf("Enter the range : ");
    scanf("%d",&n);

    struct Node* root=NULL;
    for(int i=0;i<n;i++){
        int num;
        printf("Enter the number : ");
        scanf("%d",&num);

        root=insertBST(root,num);
    }


    int k;
    scanf("%d",&k);

    search(root,k);
}