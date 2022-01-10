/// program to print the numbers which are not divisible by 3 from 1 to 100....
#include<stdio.h>
int main()
    int i;
    for(i=1;i<=100;i++){
        if(i%3==0){
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}
