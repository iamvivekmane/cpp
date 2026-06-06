#include <iostream>
using namespace std;

class Date
{
    // Data members to store the date
private:
    int day;
    int month;
    int year;

public:
    // Member function to accept the date
    void accept_record(void)
    {
        cout << "Day      :   ";
        cin >> day;
        cout << "Month    :   ";
        cin >> month;
        cout << "Year     :   ";
        cin >> year;
    }

    // Member function to print the date
    void print_record(void)
    {
        cout << "-------------" << endl;
        cout << day << "/" << month << "/" << year << endl;
    }
};
int main()
{
    // Creating object of Date class
    Date date;

    // Calling member fucntions
    date.accept_record();
    date.print_record();

    return 0;
}