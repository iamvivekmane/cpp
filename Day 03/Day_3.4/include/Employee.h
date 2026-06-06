#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

class Employee
{
private:
    char name[50];
    int employee_id;
    float salary;

public:
    void accept_record();
    void print_record();
};

#endif /* EMPLOYEE_H_ */