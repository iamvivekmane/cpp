#include <stdio.h>
struct Employee
{
    char name[50];
    int employee_id;
    float salary;
};
void accept_record(struct Employee *ptr)
{
    printf("Enter the name of the employee\n");
    scanf("%[^\n]%*c", ptr->name);
    printf("Enter the employee id\n");
    scanf("%d", &ptr->employee_id);
    printf("Enter the salary of the employee\n");
    scanf("%f", &ptr->salary);
}

void print_record(struct Employee *ptr)
{
    printf("The name of employee is %s\n", ptr->name);
    printf("The employee id of employee is %d\n", ptr->employee_id);
    printf("The salary of employee is %.2f\n", ptr->salary);
}

int main()

{
    struct Employee emp;
    accept_record(&emp);
    print_record(&emp);
    return 0;
}