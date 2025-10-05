#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* createNode(int value){
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;

    return newNode;
}

void addFirst(struct Node** head,int value){
    struct Node* newNode=createNode(value);
    if(*head==NULL){
        *head=newNode;
        return;
    }

    newNode->next=*head;
    (*head)->prev=newNode;
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
    newNode->prev=temp;

}

void display_LL(struct Node** head){
    struct Node* temp=*head;
    printf("\nThe Doubly LinkedList is as follows :  \n");
    while(temp!=NULL){
        printf("%d " ,temp->data);
        temp=temp->next;
    }
}

void remove_Nth_idx(struct Node** head,int idx){
    int i=0;
    struct Node* temp=*head;
    while(i<idx-1){
        i++;
        temp=temp->next;
    }
    struct Node *prev_=temp->next->next;
    temp->next=prev_;
    prev_->prev=temp;
}



int main(){
    struct Node* head=NULL;
    addLast(&head,1);
    addLast(&head,2);
    addLast(&head,3);
    addLast(&head,4);
    display_LL(&head);

    remove_Nth_idx(&head,2);
    display_LL(&head);

}