#include <stdio.h>

union student
{
    struct
    {

        char name[100];
        int roll;
        double marks[3];
        double TotalMarks;
    };
};

void display(union student *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        double totalMarks = 0;
        printf("Student's Name: %s Roll: %d Total Marks: %.2lf\n", arr[i].name, arr[i].roll, arr[i].TotalMarks);
    }
}

int main()
{
    int n;
    printf("Enter number of Students : ");
    scanf("%d", &n);

    union student arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name : ");
        scanf("%s", arr[i].name);
        printf("Enter roll : ");
        scanf("%d", &arr[i].roll);
        int size = sizeof(arr[i].marks) / sizeof(arr[i].marks[0]);
        int sum = 0;
        for (int j = 0; j < size; j++)
        {
            printf("Enter Marks %d : ", j + 1);
            scanf("%lf", &arr[i].marks[j]);
            sum = sum + arr[i].marks[j];
        }
        arr[i].TotalMarks = sum;
    }

    display(arr, n);
}