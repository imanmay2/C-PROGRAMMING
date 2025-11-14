#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct node* right;
};

struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}


struct Node* buildTree(int arr[],int i,int n){
    if(i>=n){
        return NULL;
    }

    struct Node* root=createNode(arr[i]);
    root->left=buildTree(arr,2*i+1,n);
    root->right=buildTree(arr,2*i+2,n);


    return root;
}


