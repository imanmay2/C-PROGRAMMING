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

void reverse_LL(struct Node** head){
    struct Node* prev=NULL;
    struct Node* next;
    struct Node* curr=*head;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}


struct Node* midNode(struct Node** head){
    struct Node* slow=*head;
    struct Node* fast=*head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;   //midNode
}


int checkPalindrome(struct Node** head){

    // midNode.
    // reverse the right half of the linkedlist.
    // match the left LL with the right LL.
    if(*head==NULL || (*head)->next==NULL){
        return 1;
    }

    struct Node* mid_Node=midNode(head);

    //reversing the right half of the linkedList.
    struct Node* curr=mid_Node;
    struct Node* prev=NULL;
    struct Node* next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    struct Node* right=prev;
    struct Node* left=*head;



    //step:3 check for the left and right linkedList.
    while(right!=NULL){
        if(left->data!=right->data){
            return 0;
        }
        left=left->next;
        right=right->next;
    }
    
    return 1;
}





int main(){
    struct Node* head=NULL;
    addLast(&head,1);
    addLast(&head,2);
    addLast(&head,2);
    addLast(&head,2);
    addLast(&head,1);
    display_LL(&head);
    delete_Nth_Node(&head,2);
    display_LL(&head);
    add_Nth_Node(&head,2,3);
    display_LL(&head);


    printf("Reversed Linked List is : \n");
    reverse_LL(&head);
    display_LL(&head);

    int checkPallin=checkPalindrome(&head);
    if(checkPallin){
        printf("LinkedList is Pallindrome.\n");
    } else{
        printf("LinkedList is not Pallindrome.\n");
    }
}

