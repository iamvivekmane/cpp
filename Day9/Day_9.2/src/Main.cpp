#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(void) : Complex(0, 0) {} // Delegating constructor

    // Parameterized constructor
    Complex(int real, int imaginary)
    {
        cout << "Complex(int real,int imaginary)" << endl;
        this->real = real;
        this->imaginary = imaginary;
    }
    // Function to print record
    void print_record(void)
    {
        cout << "-----------------" << endl;
        cout << "Real         :   " << real << endl;
        cout << "Imaginary    :   " << imaginary << endl;
    }
};

int main()
{
    Complex c1; // Complex(void) will call Complex(int real , int imaginary);
    c1.print_record();
    return 0;
}