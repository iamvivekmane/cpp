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
        void init_employee()
        {
            name = "";
            emp_id = 0;
            salary = 0;
        }

        void accept_record()
        {
            cout << "Name           :   ";
            cin >> name;
            cout << "Employee id    :   ";
            cin >> emp_id;
            cout << "Salary         :   ";
            cin >> salary;
        }
        void print_record()
        {
            cout << "Name           :   " << name << endl;
            cout << "Employee id    :   " << emp_id << endl;
            cout << "Salary         :   " << salary << endl;
        }
    };
}

int main()
{
    using namespace kdac;
    Employee emp;
    emp.init_employee();
    emp.accept_record();
    emp.print_record();

    return 0;
}