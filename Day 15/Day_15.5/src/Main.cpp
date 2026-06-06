#include <iostream>
#include <cstring>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(void) : real(0), imaginary(0)
    {
        cout << "Complex(void) : real(0), imaginary(0)" << endl;
    }

    Complex(int real, int imaginary)
    {
        cout << "Complex(int real, int imaginary)" << endl;
        this->real = real;
        this->imaginary = imaginary;
    }

    // Complex &other = c1;
    // Complex *const this = &c2;
    Complex(const Complex &other)
    {
        cout << "Complex(const Complex &other)" << endl;
        this->real = other.real;
        this->imaginary = other.imaginary;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // // -----------------------------------------------------------------------------
    // Complex c1;
    // Complex &c2 = c1;
    // // -----------------------------------------------------------------------------
    // Complex c1(10, 20);
    // Complex c2;
    // c2 = c1; // c2.operator(c1);
    // // -----------------------------------------------------------------------------
    Complex c1(20, 30);
    // Complex c2 = c1;
    Complex c2(c1);

    return 0;
}