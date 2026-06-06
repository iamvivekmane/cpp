#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
struct Employee
{
    char name[30];
    int empid;
    float salary;
};

void accept_record(struct Employee *e1);
void print_record(struct Employee *e1);
#endif /* EMPLOYEE_H_ */
