#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>
int main(){
    char str[]="hello java! ok got it ";
    char *sub;
    sub=strstr(str,"java");
    printf("%s",sub);
}
