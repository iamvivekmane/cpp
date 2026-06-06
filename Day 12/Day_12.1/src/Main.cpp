#include <iostream>
using namespace std;
class ArithmeticException
{
private:
    string message;

public:
    ArithmeticException(const string message) : message(message) {}
    string get_message(void) const throw()
    {
        return this->message;
    }
};
void accept_record(string message, int &num1) throw()
{
    cout << message;
    cin >> num1;
}
void print_record(int &result) throw()
{
    cout << "Result    :   " << result << endl;
}

int calculate(int num1, int num2) throw(ArithmeticException)
{
    if (num2 == 0)
    {
        throw ArithmeticException("Divide by 0 error");
    }
    return num1 / num2;
}
int main()
{
    cout << "Open file" << endl;
    int num1;
    int num2;
    accept_record("Number1   :   ", num1);
    accept_record("Number2   :   ", num2);
    try
    {
        int result = calculate(num1, num2);
        print_record(result);
    }
    catch (ArithmeticException &ex)
    {
        cout << ex.get_message() << endl;
    }
    catch (...) // Generic Catch block
    {
        cout << "Generic catch block" << endl;
    }
    cout << "Close file" << endl;

    return 0;
}