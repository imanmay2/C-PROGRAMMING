//Gym Membership Management.
//userID,Name and membership status(Active,Inactive).

#include<stdio.h>
#include<string.h>
int main(){
    int f;
    //initialising the arrays to store the userid,name,status.
    int ct=-1;
    printf("Menu : \n");
    printf("1. Add Member \n");
    printf("2. Search Member \n");
    printf("3. Update Membership Status \n");
    printf("4. Calculate Membership Totals \n");
    printf("5. Display All Members \n");
    printf("0. Exit\n");
    while(1){
        int choice,n;
        char idSearch[50];
        char userid[1000][50];
        char username[1000][50];
        char user_status[1000][50];
        char id[50];
        char name[50];
        char status[50];
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1){
            ct++;
            printf("Enter the member ID: ");
            scanf("%s",id);
            printf("Enter member name: ");
            scanf("%s",name);
            strcpy(status,"Active");
            strcpy(userid[ct],id);
            strcpy(username[ct],name);
            strcpy(user_status[ct],status);
        } else if(choice==2){
            printf("Enter member ID to search: ");
            scanf("%s",idSearch);
            n=sizeof(userid)/sizeof(userid[0]);
            f=0;
            // printf("%d",n);
            // printf("ID: %s, Name: %s, Status: %s\n",userid[0],username[0],user_status[0]);
            for(int i=0;i<n;i++){
                if(!strcmp(userid[i],"")){
                    break;
                }
                if(!strcmp(userid[i],idSearch)){
                    printf("MEMBER FOUND!\n");
                    printf("ID: %s, Name: %s, Status: %s\n",userid[i],username[i],user_status[i]);
                    f=1;
                    break;
                }   
            }
            if(f==0){
                printf("Member Not Found in Database.\n");
            }
        } else if(choice==3){
            printf("Enter member ID to update: ");
            scanf("%s",idSearch);
            f=0;
            for(int i=0;i<1000;i++){
                if(!strcmp(userid[i],"")){
                    break;
                }
                if(!strcmp(userid[i],idSearch)){
                    char sts[50];
                    printf("Enter new Status (Active/Inactive): ");
                    scanf("%s",sts);
                    strcpy(user_status[i],sts);
                    printf("Status Updated ! \n");
                    f=1;
                    break;
                }   
            }
            if(f==0){
                printf("Member Not Found in Database.\n");
            }
            
        } else if(choice==4){
            int active_=0;
            int inactive_=0;
            for(int i=0;i<1000;i++){
                if(!strcmp(userid[i],"")){
                    break;
                } if(!strcmp(user_status[i],"Active")){
                    active_++;
                } else if(!strcmp(user_status[i],"Inactive")){
                    inactive_++;
                }
            }

            printf("Membership Totals: \n");
            printf("Active Members: %d\n",active_);
            printf("Inactive Members: %d\n",inactive_);
        }
        else if(choice==5){
            printf("ALL MEMBERS: \n");
            n=sizeof(userid)/sizeof(userid[0]);
            // printf("%d",n);
            // printf("ID: %s, Name: %s, Status: %s\n",userid[0],username[0],user_status[0]);
            for(int i=0;i<n;i++){
                if(!strcmp(userid[i],"")){
                    break;
                }
                printf("ID: %s, Name: %s, Status: %s\n",userid[i],username[i],user_status[i]);
                
            }
        } else if(choice==0){
            printf("Program has been terminated ! ");
            break;
        }
    }
}