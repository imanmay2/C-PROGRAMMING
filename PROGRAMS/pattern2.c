// print the following pattern.....
/*    *
      *
*  *  *  *  *
      *
      * 
      
*/
#include<stdio.h>
int main()
{
    int i,j;
    printf("pattern is as follows\n");
    for (i =0; i<5;i++){
        if(i!=2){
        for (j=0;j<5;j++){
            if(j==3)
                printf("*");
            else
                printf("  ");
        }}
        else{
            for (j=0;j<5;j++){
                printf("*  ");
        }
        }
        printf("\n");
    }
    return 0;
}