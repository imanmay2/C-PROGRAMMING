#include<stdio.h>
void deposit(int *,int *);
void withdraw_(int *,int *);
int ch;
int balance=0;
int main(){
    while(1){
        
        scanf("%d",&ch);
        if(ch==1){
            int depo;
            scanf("%d",&depo);
            deposit(&depo,&balance);
            printf("Deposit successful.\n");
            printf("Current balance: %d\n",balance);
        } else if(ch==2){
            int withdraw;
            scanf("%d",&withdraw);
            if(withdraw<=balance){
                withdraw_(&withdraw,&balance);
                printf("Withdrawal successful.\n");
                printf("Current balance: %d\n",balance);
            } else{
                printf("Insufficient balance.\n");
            }
        }
        
        else if(ch==3){
            printf("Current Balance: %d\n",balance);
        } else if(ch==4){
            printf("Exiting program.");
            break;
        } else{
            printf("Invalid choice.\n");
        }
    }
}


void deposit(int *depo,int *balance){
    *balance=*balance+(*depo);
}

void withdraw_(int *withdraw,int *balance){
    *balance=*balance-(*withdraw);
}