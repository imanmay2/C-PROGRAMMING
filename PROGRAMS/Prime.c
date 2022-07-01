// WAP to print Prime Numbers form 1 to 50.
#include <stdio.h>
int main(){
    int i,n=50;
    for(i=1;i<=n;i++)
    {
        int f=0;
        for(int j=1;j<=n;j++)
        {
            if(i%j==0)
            f++;
        }
        if(f==2)
            printf("%d ",i);    
    }
return 0;
}