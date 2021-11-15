// print the following pattern.....
      *
      *
*  *  *  *  *
      *
      * //
#include<stdio.h>
int main()
{
    int i,j;
    printf("pattern is as follows\n");
    for(i=1;i<=5;i++)
    {
        for (j = 0; i <=5; j++)
        {
            if(j==3 || i==3)
            {
                printf("* ");
            }
            else
            {
                printf(" ");
            }
        printf("\n");
        }
        
        
    }
    return 0;
}