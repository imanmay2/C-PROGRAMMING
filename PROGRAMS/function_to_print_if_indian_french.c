//program to print the namaste or bonjour if the user enters indian or french respectively.
#include<stdio.h>
void printNamaste();
void printBonjour();
int main()
{
    char user;
    printf("Enter f for french or enter i for indian");
    scanf("%c",&user);
    if(user=='i'){
        printNamaste();
    }
    else if(user=='f'){
        printBonjour();
    }
    return 0;
}

void printNamaste(){
    printf("Namaste!!!!Indian");
}
void printBonjour(){
    printf("Bonjour!!!!French");
}