// Print the following pattern 
/* 

*
* *
* * *
* * * *
* * * * *

*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows you want to print: ");
    scanf("%d", &n);
    printf("Pattern is as follows....\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
        printf("* ");
        }
    printf("\n");
    }
    
    return 0;
}