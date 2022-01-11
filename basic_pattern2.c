///1
///2 3
///4 5 6
///7 8 9 10
#include<stdio.h>
int main()
{
    int i,j,k=1,n;
    printf("Enter the number of rows you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}