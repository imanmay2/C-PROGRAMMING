#include<stdio.h>

int ct=-1;

int isEmpty(int arr[],int n){
    if(ct==-1){
        return 1;
    } return 0;
}

int isFull(int arr[],int n){
    if(ct==n-1){
        return 1;
    } return 0;
}

void push(int arr[],int n){
    ct++;
    if(isFull(arr,n)){                      
        printf("Stack is Full!!\n");          
        ct--;
        return;
    }

    printf("Enter the Book ID : ");
    scanf(" %d",&arr[ct]);

    printf("Book ID %d is pushed into the Stack.\n",arr[ct]);
}

void pop(int arr[],int n){
    if(isEmpty(arr,n)){
        printf("Stack is Empty.\n");
        return;
    }
    ct--;
    printf("Book ID %d is popped from the Stack\n",arr[ct+1]);
}

void display(int arr[],int n){
    if(isEmpty(arr,n)){
        printf("Stack is Empty.\n");
        return;
    }
    printf("Book ID in the Stack are : \n");
    for(int i=ct;i>=0;i--){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int n=100;
    int arr[100];

   

    while(1){
    printf("1. Push BookID into Stack.\n");
    printf("2. Pop BookID from Stack.\n");
    printf("3. Display Stack.\n");
    printf("4. Exit.\n");
    printf("Enter your choice: \n");
    int ch;
    scanf("%d",&ch);

    if(ch==1){
        // push operation
        push(arr,n);

        
    } else if(ch==2){
        // pop operation
        pop(arr,n);

    } else if(ch==3){
        display(arr,n);

    } else if(ch==4){
        printf("Program Terminated.");
        break;

    } else{
        printf("Invalid Choice entered.\n");
    }
    }
}