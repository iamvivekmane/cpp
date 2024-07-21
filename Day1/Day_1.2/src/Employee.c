#include <stdio.h>
#include "../include/Employee.h"
// Function to accept information of employee using pointer
void accept_record(struct Employee *ptr)
{
    printf("Name            :   ");
    scanf("%s", ptr->name);

    printf("Employee id     :   ");
    scanf("%d", &ptr->empid);

    printf("Salary          :   ");
    scanf("%f", &ptr->salary);
};

// Function to display information of employee using pointer
void print_record(struct Employee *ptr)
{
    printf("Name            :   %s\n", ptr->name);
    printf("Employee id     :   %d\n", ptr->empid);
    printf("Salary          :   %.2f\n", ptr->salary);
}
