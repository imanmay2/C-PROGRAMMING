#include<stdio.h>

int ct=-1;


int isEmpty(char arr[],int n){
    if(ct==-1){
        return 1;
    } return 0;
}

int isFull(char arr[],int n){
    if(ct==n-1){
        return 1;
    } return 0;
}

void push(char arr[],int n){
    ct++;
    if(isFull(arr,n)){                      
        printf("Stack is Full!!\n");          
        ct--;
        return;
    }

    printf("Enter the element : ");
    scanf(" %c",&arr[ct]);

    printf("Pushed Element : %c\n",arr[ct]);
}

void pop(char arr[],int n){
    if(isEmpty(arr,n)){
        printf("Stack is Empty.\n");
        return;
    }
    ct--;
    printf("Popped element is: %c\n",arr[ct+1]);
}

void display(char arr[],int n){
    if(isEmpty(arr,n)){
        printf("Stack is Empty.\n");
        return;
    }
    printf("Elements in the Stacks are : \n");
    for(int i=ct;i>=0;i--){
        printf("%c\n",arr[i]);
    }
}

int main(){
    int n=100;
    char arr[n];

    while(1){
        printf("1. Push Character into Stack.\n");
    printf("2. Pop Character from Stack.\n");
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