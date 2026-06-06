#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Parameterless constructor
    // Complex *const this = &c1
    Complex(void)
    {
        cout << "Complex(void)" << endl;
        this->real = 0;
        this->imaginary = 0;
    }

    // Parameterized constructor with single parameter
    // Complex *const this = &c1
    Complex(int value)
    {
        cout << "Complex(int value)" << endl;
        this->real = value;
        this->imaginary = value;
    }

    // Parameterized constructor with multiple parameters
    // Complex *const this = &c1
    Complex(int real, int imaginary)
    {
        cout << "Complex(int real,int imaginary)" << endl;
        this->real = real;
        this->imaginary = imaginary;
    }

    // Function to accept record from user
    // Complex *const this = &c1
    void accept_record(void)
    {
        cout << "Real         :   ";
        cin >> this->real;
        cout << "Imaginary    :   ";
        cin >> this->imaginary;
    }

    // Function to print record
    // Complex *const this = &c1
    void print_record(void)
    {
        cout << "Real         :   " << this->real << endl;
        cout << "Imaginary    :   " << this->imaginary << endl;
    }
};

int main()
{
    Complex c1;
    Complex c2(10);
    Complex c3(10, 20);
    c1.print_record();
    return 0;
}