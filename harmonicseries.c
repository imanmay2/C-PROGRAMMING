///program to print the sum of harmonic series....1+(1/2)+(1/3)........1/n terms............
#include<stdio.h>
int main()
{
    int n,a=1,i;
    float s1=0;
    printf("Enter the range of the series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s1=s1+(a/i);
        printf("%d",s1);
    }
    printf("The sum of the harmonic series is as follows %d",s1);
    return 0;
}