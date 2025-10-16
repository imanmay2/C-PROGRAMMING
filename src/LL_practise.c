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


void removeFirst(struct Node** head){
    struct Node* temp=*head;
    if(*head==NULL){
        printf("Linked List is Empty.");
        return;
    }

    *head=(*head)->next;
    printf("Removed first element");
    return;
}


void removeLast(struct Node** head){
    struct Node* temp=*head;
    if(*head==NULL){
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
    printf("Removed the Last Element.");
}

void addMiddle(struct Node** head,int value,int idx){
    struct Node* newNode=createNode(value);

    if(*head==NULL){
        *head=newNode;
        return;
    }

    int i=0;
    struct Node* temp=*head;
    while(i<idx-1){
        temp=temp->next;
        i++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    printf("Successfully added in the middle.\n");
    return;
}

void removeIndex(struct Node** head,int idx){
    if(*head==NULL){
        printf("List is empty.\n");
        return;
    }

    struct Node* temp=*head;
    int i=0;
    while(i<idx-1){
        temp=temp->next;
        i++;
    }

    temp->next=temp->next->next;
    printf("Desired element removed.");
    return;
}


int main(){
    struct Node* head=NULL;
    addFirst(&head,1);
    addFirst(&head,2);
    addLast(&head,3);
    addLast(&head,4);

    display(&head);

    removeFirst(&head);
    display(&head);

    removeLast(&head);
    display(&head);

    removeIndex(&head,2);
    display(&head);
}