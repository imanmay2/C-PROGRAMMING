#include <stdio.h>
int main()
{
    int f,k,c;
    printf("WELCOME TO THE TEMPEARTURE CONVERTER");
    printf("Enter the temperature in Celcius degree..");
    scanf("%d",&c);
    f=((9*c)/32)+32;
    printf("%s,%d","temperature in  Farenheit is",f);
    k=c+273;
    printf("%s,%d","temperature in  kelvin is",k);
    return 0;
}