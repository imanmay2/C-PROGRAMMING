#include<stdio.h>
int main()
{
    float n,con;
    printf("Enter the cost of your item purchased: ");
    scanf("%f",&n);
    con=n*100;
    printf("The conversion of RS to Paise is as follows %f",con);
    return 0;
}