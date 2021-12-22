///program to print the sum of harmonic series....1+(1/2)+(1/3)........1/n terms............
#include<stdio.h>
int main()
{
    int n,a=1,s=0,s1=0,i;
    printf("Enter the range of the series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s1=s+(a/i);
        printf("%d",s);
    }
    printf("The sum of the harmonic series is as follows %d",s);
    return 0;
}