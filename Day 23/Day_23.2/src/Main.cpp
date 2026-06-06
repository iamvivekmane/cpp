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
    void show_record(void)
    {
        cout << "Name           :   " << this->name << endl;
        cout << "Age            :   " << this->age << endl;
    }
    ~Person(void)
    {
        cout << "~Person(void)" << endl;
    }
};
class Employee
{
private:
    string name;     // 24 bytes
    int age;         // 4 bytes
    int employee_id; // 4 bytes
    float salary;    // 4 bytes

public:
    Employee(void) : name(""), age(0), employee_id(0), salary(0)
    {
        cout << "Employee(void)" << endl;
    }
    Employee(string name, int age, int employee_id, float salary) : name(name), age(age), employee_id(employee_id), salary(salary)
    {
        cout << "Employee(string name, int age, int employee_id, float salary)" << endl;
    }
    void display_record(void)
    {
        cout << "Name           :   " << this->name << endl;
        cout << "Age            :   " << this->age << endl;
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
    Employee emp("Harry", 32, 345, 120000);
    emp.display_record();
    return 0;
}