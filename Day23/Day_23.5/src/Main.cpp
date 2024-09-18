#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string name; // 24 bytes
    int age;     // 4 bytes

public:
    Person(void) : name(""), age(0)
    {
        cout << "Person(void)" << endl;
    }
    Person(string name, int age) : name(name), age(age)
    {
        cout << "Person(string name, int age) : name(name), age(age)" << endl;
    }
    void print_record(void)
    {
        cout << "Name           :   " << this->name << endl;
        cout << "Age            :   " << this->age << endl;
    }
};
class Employee : public Person
{
private:
    int employee_id; // 4 bytes
    float salary;    // 4 bytes

public:
    Employee(void) : employee_id(0), salary(0)
    {
        cout << "Employee(void)" << endl;
    }
    Employee(string name, int age, int employee_id, float salary) : employee_id(employee_id), salary(salary)
    {
        cout << "Employee(string name, int age, int employee_id, float salary)" << endl;
    }
    void print_record(void)
    {
        Person::print_record();
        cout << "Employee id    :   " << this->employee_id << endl;
        cout << "Salary         :   " << this->salary << endl;
    }
    ~Employee(void)
    {
        cout << "~Employee(void)" << endl;
    }
};
int main()
{
    Employee emp("Abc", 23, 35, 25000);
    emp.print_record();
    emp.Person::print_record();
    emp.Employee::print_record();
    return 0;
}