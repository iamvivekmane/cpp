#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    int empid;
    float salary;
};

void accept_record(struct employee *ptr)
{
    printf("Enter the name of the employee\n");
    scanf("%s", ptr->name);

    printf("Enter the empid of the employee\n");
    scanf("%d", &ptr->empid);

    printf("Enter the salary of the employee\n");
    scanf("%f", &ptr->salary);
};

void print_record(struct employee *ptr)
{
    printf("The name of the employee is %s\n", ptr->name);
    printf("The empid of the employee is %d\n", ptr->empid);
    printf("The salary of the employee is %f\n", ptr->salary);
}

int main()
{

    struct employee *ptr = (struct employee *)malloc(sizeof(struct employee *));
    accept_record(ptr);
    print_record(ptr);
    free(ptr);
    return 0;
}