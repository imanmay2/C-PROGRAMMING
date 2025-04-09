#include <stdio.h>
#include<stdlib.h>
union Student
{
    struct
    {
        int roll;
        char name[100];
        double marks[3];
    };
};

void display(union Student *s, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        double t = 0;
        for (int j = 0; j < m; j++)
        {
            t = t + (s[i].marks[j]);
        }
        printf("Name : %s, Roll : %d , Marks : %lf\n", s[i].name, s[i].roll, t);
    }
}

int main()
{
    int n = 2;
    union Student *s=(union Student*)malloc(n*sizeof(union Student));
    for (int i = 0; i < 2; i++)
    {
        printf("Enter Roll : ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        for (int j = 0; j < 3; j++)
        {
            printf("Enter marks : ");
            scanf("%lf", &s[i].marks[j]);
        }
    }

    // display the structure.
    display(s, 2, 3);
    free(s);
}