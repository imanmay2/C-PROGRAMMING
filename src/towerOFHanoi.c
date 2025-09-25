#include<stdio.h>
#include<math.h>

void moves(int n){
    printf("Total no. of moves : %d\n",(int)pow(2,n)-1);
}

void steps(int n,char src,char aux,char desti){
    if(n==1){
        printf("Disk %d moved from %c -> %c\n",n,src,desti);
        return;
    }

    steps(n-1,src,desti,aux);
    printf("Disk %d moved from %c -> %c\n",n,src,desti);
    steps(n-1,aux,src,desti);

}

int main(){
    int n=4;
    steps(n,'A','B','C');
    moves(n);
}