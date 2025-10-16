#include<stdio.h>
#include<stdlib.h>
#include<math.h>


struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

int countNode(struct Node* root){
    if(root==NULL){
        return 0;
    }

    int sumLeft=countNode(root->left);
    int sumRight=countNode(root->right);
    return sumLeft+sumRight+1;
}

void inOrder(struct Node* root){
    //left data right
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf("%d ",root->data);
    inOrder(root->right);
}

int main(){
    struct Node* root=createNode(1);
    root->left=createNode(2);
    root->right=createNode(3);
    root->left->left=createNode(4);
    root->left->right=createNode(5);


    printf("The InOrder traversals of the binary Tree is : \n");
    inOrder(root);

    printf("Sum of the nodes is : %d\n",countNode(root));
    
}