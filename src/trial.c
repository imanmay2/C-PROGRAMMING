#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main(){
    int inp1;
    scanf("%d",&inp1);
    if(inp1==1 || inp1==2){
        int inp2;
        scanf("%d",&inp2);
        printf("%d %d are the two inputs.",inp1,inp2);
    } else{
        printf("%d is the input.",inp1);
    }
}
