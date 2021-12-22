///                         CALCULATOR                        ///
#include<stdio.h>
int main()
{
    int add,sub,pro,div,n1,n2;
    printf("Enter two numbers");
    scanf("%d %d",&n1,&n2);
    add=(n1+n2);
    sub=(n1-n2);
    if(sub<(-1)){
        sub=sub*(-1);

    }
    pro=(n1*n2);
    div=(n1/n2);
    printf("ADDITION,SUBSTRACTION,MULTIPLICATION,DIVISION %d,%d,%d,%d",add,sub,pro,div);
    return 0;


}