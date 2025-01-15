#include<stdio.h>

struct employee
{
    int empid;
    char name[10];
    float salary;
};

struct student
{
    char name;
    int id;
    int marks;
};

void main()
{
    struct student s[50];
    int n, i;
    printf("Enter the no. of students\n");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the details of student:\n");
        scanf("%s\n", s[i].name);
        scanf("%d\n", &s[i].id);
        scanf("%f\n", &s[i].marks);
    }
    printf("Student data\n");
    for ( i = 0; i < n; i++)
    {
        printf("Student %d\n", i);
        printf("name: %s\n", s[i].name);
        printf("id: %d\n", s[i].id);
        printf("marks: %f\n", s[i].marks);
    }
    
}

// void main()
// {
//     struct employee e1;
//     printf("enter the employee: ");
//     scanf("%d", &e1.empid);
//     scanf("%s", e1.name);
//     scanf("%f", &e1.salary);
//     printf("The details of the employee are\n");
//     printf("empid: %d\n", e1.empid);
//     printf("emp name: %s\n", e1.name);
//     printf("emp salary: %f\n", e1.salary);
// }