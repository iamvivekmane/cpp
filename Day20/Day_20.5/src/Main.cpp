#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int value)
    {
        this->real = value;
        this->imaginary = value;
    }
    void print_record(void)
    {
        cout << "Real number      :   " << this->real << endl;
        cout << "Imaginary number :   " << this->real << endl;
    }
};
int main()
{
    // int number = 10;
    // Complex c1 = number;
    // c1.print_record();
    // // --------------------------------------------
    return 0;
}