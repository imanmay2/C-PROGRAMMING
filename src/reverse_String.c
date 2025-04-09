// #include<stdio.h>
// void reverseString(char *str){
//     // printf("%s",str);
//     char *start=str;
//     char *end=str;
//     while(*end){
//         end++;
//     }
//     end--;
//     while(start<end){
//         char temp=*start;
//         *start=*end;
//         *end=temp;
//         start++;
//         end--;
//     }
// }
// int main(){
//     char str[100];
//     fgets(str,100,stdin);
//     reverseString(str);
//     printf("%s",str);
// }

#include<stdio.h>

void reverseStr(char *str){
    char *start=str;
    char *end=str;
    while(*end){
        end++;
    } end--;

    while(start<end){
        
        char temp=*start;
        *start=*end;
        *end=temp;

        start++;
        end--;
    }
}

int main(){
    char str[100];
    fgets(str,100,stdin);

    reverseStr(str);
    printf("%s",str);
}