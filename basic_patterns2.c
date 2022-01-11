#include<stdio.h>
int main()
{
    inti,j,n;
    printf("Enter the row");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf(i);
        }
        printf("\n");
    }
    return 0;
}