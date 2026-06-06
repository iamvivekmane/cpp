#include <stdio.h>
struct Employee
{
private:
    char name[50];
    int employee_id;
    float salary;

public:
    void accept_record()
    {
        printf("Enter the name of the employee\n");
        scanf("%[^\n]%*c", name);
        printf("Enter the employee id\n");
        scanf("%d", &employee_id);
        printf("Enter the salary of the employee\n");
        scanf("%f", &salary);
    }

    void print_record()
    {
        printf("The name of employee is %s\n", name);
        printf("The employee id of employee is %d\n", employee_id);
        printf("The salary of employee is %.2f\n", salary);
    }
};

int main()

{
    Employee emp;
    emp.accept_record();
    emp.print_record();
    return 0;
}