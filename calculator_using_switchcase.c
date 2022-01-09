#include<stdio.h>
int main()
{
    int a,b,choice;
    float res;
    printf("Enter the two numbers");
    scanf("%d %d",&a,&b);
    printf("1.Addition");
    printf("2.Substraction");
    printf("3.Multiplition");
    printf("4.Division");
    printf("Please enter your choice from the above lists");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        res=a+b;
        printf("Addition is %f",res);
        break;
        case 2:
        printf("Substraction is %f",res);
        break;
        case 3:
        printf("Multiplication is %f",res);
        break;
        case 4:
        printf("Division is %f",res);
        break;
        default:
        printf("Please enter the valid choice in between 1-4");
        break;

    }
    return 0;
}