#include<stdio.h>
#include<stdlib.h>

//creating the struct for the Node.

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


void display_LL(struct Node** head){
    struct Node* temp=*head;

    printf("The LinkedList is as follows : \n");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void addLast(struct Node** head,int value){
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




int main(){
    struct Node* head=NULL;
    addLast(&head,1);
    addLast(&head,2);
    addLast(&head,3);
    addLast(&head,4);
    display_LL(&head);
}