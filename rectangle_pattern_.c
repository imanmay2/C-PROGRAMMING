#include<stdio.h>
int main()
{
    int i,j,row,col;
    printf("Enter the rows and the coloums numbers");
    scanf("%d %d",&row,&col);
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}