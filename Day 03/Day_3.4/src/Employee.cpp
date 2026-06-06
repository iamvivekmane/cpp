#include <stdio.h>
#include "../include/Employee.h"

void Employee::accept_record()
{
    printf("Enter the name of the employee\n");
    scanf("%[^\n]%*c", name);
    printf("Enter the employee id\n");
    scanf("%d", &employee_id);
    printf("Enter the salary of the employee\n");
    scanf("%f", &salary);
}

void Employee::print_record()
{
    printf("The name of employee is %s\n", name);
    printf("The employee id of employee is %d\n", employee_id);
    printf("The salary of employee is %.2f\n", salary);
}