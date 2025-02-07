#include<stdio.h>
void checkIdentity(int *,int,int,int *);
int main(){
    int n,m,f=1;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    if(n!=m){
        printf("Not an identity matrix");
    } else{
        //taking input from the user.
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d",&arr[i][j]);
            }
        }
        
        checkIdentity(arr,n,m,&f);
        if(f==1){
            printf("Identity matrix");
        } else if(f==0){
            printf("Not an identity matrix");
        }
        
        
    }
}

void checkIdentity(int *arr,int n,int m,int *f){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int *ele=(arr+i*n+j);
            if((i==j && *ele==1) || (i!=j && *ele==0)){
                continue;
            } else{
                *f=0;
                break;
            }
        }
    }
}