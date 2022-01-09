#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter the starting values and the ending values");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        int ct=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                ct=ct+1;
            }
        
        }
        if(ct==2){
            printf("%d ",i);
        }
    }
    return 0;
}


