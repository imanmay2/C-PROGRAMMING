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

void add_Nth_Node(struct Node** head,int idx,int value){
    struct Node* newNode=createNode(value);

    struct Node* temp=*head;
    int i=0;
    while(i<idx-1){
        temp=temp->next;
        i++;
    }

    newNode->next=temp->next;
    temp->next=newNode;
}

void delete_Nth_Node(struct Node** head,int idx){
    int i=0;
    struct Node* temp=*head;
    while(i<idx-1){
        temp=temp->next;
        i++;
    }
    temp->next=temp->next->next;
}


int main(){
    struct Node* head=NULL;
    addLast(&head,1);
    addLast(&head,2);
    addLast(&head,3);
    addLast(&head,4);
    addLast(&head,5);
    display_LL(&head);
    delete_Nth_Node(&head,2);
    display_LL(&head);
    add_Nth_Node(&head,2,3);
    display_LL(&head);
}