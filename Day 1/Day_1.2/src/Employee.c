#include <stdio.h>
#include "../include/Employee.h"
void accept_record(struct Employee *e1)
{
    printf("Enter the name of the employee\n");
    scanf("%s", e1->name);

    printf("Enter the empid of the employee\n");
    scanf("%d", &e1->empid);

    printf("Enter the salary of the employee\n");
    scanf("%f", &e1->salary);
}

void print_record(struct Employee *e1)
{
    printf("The name of the employee is %s\n", e1->name);
    printf("The empid of the employee is %d\n", e1->empid);
    printf("The salary of the employee is %f\n", e1->salary);
}