///count the negative and positive numbers entered by the user///
#include<stdio.h>
int main()
{
    int n,p=0,ne=0,num,i;
    printf("Enter the range of the numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter a number you want to enter");
        scanf("%d",&num);
        if(num<0){
            ne=ne+1;
        }
        else{
            p=p+1;
        }
    }
    printf("Count of positive and negative numbers are %d %d respectively",p,ne);
    return 0;
    
}
    