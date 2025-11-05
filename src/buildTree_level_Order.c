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


struct Node* buildTree(int arr[],int n,int i){
    //level order traversal
    if(i>=n){
        return NULL;
    }

    struct Node* root=createNode(arr[i]);

    root->left=buildTree(arr,n,2*i+1);
    root->right=buildTree(arr,n,2*i+2);

    return root;
}


void postOrder(struct Node* root){
    if(root==NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    int num=root->data;
    printf("%d ",num*num*num);
}

int main(){
    int arr[]={1,5,3};
    struct Node* root=buildTree(arr,3,0);
    postOrder(root);
}