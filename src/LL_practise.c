#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};


struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;

    return newNode;
}


void addFirst(struct Node** head,int value){
    struct Node* newNode=createNode(value);
    if(*head==NULL){
        *head=newNode;
        return;
    }

    newNode->next=*head;
    *head=newNode;
}


void addLast(struct Node** head, int value){
    struct Node* newNode=createNode(value);
    if(*head==NULL){
        *head=newNode;
        return;
    }

    struct Node* temp=*head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
}


void display(struct Node** head){
    struct Node* temp=*head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}


int main(){
    struct Node* head=NULL;
    addFirst(&head,1);
    addFirst(&head,2);
    addLast(&head,3);
    addLast(&head,4);

    display(&head);
}