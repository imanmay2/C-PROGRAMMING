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

    newNode->next=*head;
    *head=newNode;
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

void display(struct Node** head){
    struct Node* temp=*head;

    while(temp!=NULL){
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("->NULL");
}


int main(){
    struct Node* head=NULL;
    addFirst(&head,20);
    addFirst(&head,10);
    addLast(&head,30);
    addLast(&head,40);

    printf("LinkedList is as follows : \n");
    display(&head);
}