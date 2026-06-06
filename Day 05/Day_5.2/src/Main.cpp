#include "../include/Employee.h"

int main()
{
    using namespace kdac;
    Employee emp;
    emp.init_employee();
    emp.accept_record();
    emp.print_record();

    return 0;
}