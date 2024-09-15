#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date(void) : day(0), month(0), year(0) {}
    Date(int day, int month, int year) : day(day), month(month), year(year) {}
    void accpet_record(void)
    {
        cout << "Day        :   ";
        cin >> this->day;
        cout << "Month      :   ";
        cin >> this->month;
        cout << "Year       :   ";
        cin >> this->year;
    }
    void print_record(void)
    {
        cout << "Date       :   " << this->day << "/" << this->month << "/" << this->year << endl;
    }
};

class Employee
{
private:
    string name;
    int employee_id;
    float salary;
    Date join_date;

public:
    Employee(void) : name(""), employee_id(0), salary(0) {}
    Employee(string name, int employee_id, int salary, Date join_date) : name(name), employee_id(employee_id), salary(salary), join_date(join_date) {}
    Employee(string name, int employee_id, int salary, int day, int month, int year) : name(name), employee_id(employee_id), salary(salary), join_date(day, month, year) {}
    void accept_record(void)
    {
        cout << "Name       :   ";
        cin >> this->name;
        cout << "Employee id:   ";
        cin >> this->employee_id;
        cout << "Salary     :   ";
        cin >> this->salary;
        join_date.accpet_record();
    }
    void print_record(void)
    {
        cout << "---------------------------" << endl;
        cout << "Name       :   " << this->name << endl;
        cout << "Employee id:   " << this->employee_id << endl;
        cout << "Salary     :   " << this->salary << endl;
        join_date.print_record();
    }
};
int main()
{
    Employee emp;
    emp.accept_record();
    emp.print_record();
    return 0;
}