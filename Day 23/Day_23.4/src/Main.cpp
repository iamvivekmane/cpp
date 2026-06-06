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
    Employee(int employee_id, float salary) : employee_id(employee_id), salary(salary)
    {
        cout << "Employee(int employee_id, float salary)" << endl;
    }
    Employee(string name, int age) : Person(name, age)
    {
        cout << "Employee(string name, int age)" << endl;
        this->employee_id = 0;
        this->salary = 0;
    }
    Employee(string name, int age, int employee_id, float salary) : employee_id(employee_id), salary(salary)
    {
        cout << "Employee(string name, int age, int employee_id, float salary)" << endl;
    }
    // Employee *const this = &emp
    void display_record(void)
    {
        this->show_record();
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
    // Person p;
    // Person p("Abc", 1001);
    // cout << endl;
    // --------------------------------
    // Person *ptr = new Person("abc", 23);
    // cout << endl;
    // delete ptr;
    // // --------------------------------
    // Employee emp;
    // Employee emp("Abc", 23, 43, 250000);
    // cout << endl;
    // // --------------------------------
    Employee *ptr = new Employee("Abc", 23, 35, 25000);
    cout << endl;
    delete ptr;
    return 0;
}