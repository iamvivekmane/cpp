#include <iostream>
using namespace std;

#include "../include/Employee.h"

using namespace kdac;

void Employee::init_employee()
{
    name = "";
    emp_id = 0;
    salary = 0;
}

void Employee::accept_record()
{
    cout << "Name           :   ";
    cin >> name;
    cout << "Employee id    :   ";
    cin >> emp_id;
    cout << "Salary         :   ";
    cin >> salary;
}
void Employee::print_record()
{
    cout << "Name           :   " << name << endl;
    cout << "Employee id    :   " << emp_id << endl;
    cout << "Salary         :   " << salary << endl;
}