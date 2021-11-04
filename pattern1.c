#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows you want to print");
    scanf("%d", &n);
    printf("pattern is as follows....\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
        printf("* ");
        }
    printf("\n");
    }
    
    return 0;
}