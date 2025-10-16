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


void reverse(struct Node** head){
    //reverse the linkedList.

    struct Node* curr=*head;
    struct Node* prev=NULL;
    struct Node* next;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}


struct Node* findMidNode(struct Node** head){
    struct Node* slow=*head;
    struct Node* fast=*head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow; //midNode
}


void checkPalindrome(struct Node** head){
    if(*head==NULL || (*head)->next==NULL){
        printf("List is palindrome.\n");
        return;
    }


    struct Node* curr=findMidNode(head);

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


    //step .3 

    int flag=1;
    while(right!=NULL){
        if(left->data!=right->data){
            flag=0;
            printf("Linked List is not Pallindrome.\n");
            break;
        }

        left=left->next;
        right=right->next;
    }
    if(flag==1){
        printf("Linked List is Pallindrome.");
    }
}

int detectCycle(struct Node** head){
    if(*head==NULL || (*head)->next==NULL){
        return 0;
    }

    struct Node* slow=*head;
    struct Node* fast=*head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            return 1;
        }
    } return 0;
}

//zig-zag








int main(){
    // struct Node* head=NULL;
    // addLast(&head,1);
    // addLast(&head,2);
    // addLast(&head,2);
    // addLast(&head,1);
    // addFirst(&head,2);

    // display(&head);

    // reverse(&head);
    // display(&head);
    // removeFirst(&head);
    // display(&head);

    // removeLast(&head);
    // display(&head);

    // removeIndex(&head,2);
    // display(&head);

    // checkPalindrome(&head);
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);


    if(detectCycle(&head)){
        printf("The LinkedList is a cycle.\n");
    } else{
        printf("The LinkedList is not in a cycle.");
    }
}