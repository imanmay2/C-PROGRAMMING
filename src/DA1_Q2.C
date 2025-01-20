//Gym Membership Management.
#include<stdio.h>
#include<string.h>
int main(){
    //userID,Name and membership status(Active,Inactive).

    int userid_[10000]; 
    char username[1000][100];
    
    int i=-1;
    while(1){
        i++;
        printf("Menu : \n");
        printf("1. Add Member \n");
        printf("2. Search Member \n");
        printf("3. Update Membership Status \n");
        printf("4. Calculate Membership Totals \n");
        printf("5. Display All Members \n");
        printf("6. Exit\n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter the member ID: ");
            scanf("%d \n",&userData_[i][0]);
            printf("Enter member name: ");
            scanf("%d \n",&userData_[i][1]);
            userData_[i][2]=
        }
    }
}