#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <string>

using namespace std;

namespace kdac
{
    class Employee
    {

    private:
        string name;
        int emp_id;
        float salary;

    public:
        void init_employee();
        void accept_record();
        void print_record();
    };
}
#endif /* EMPLOYEE_H_ */