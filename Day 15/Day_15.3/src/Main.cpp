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

    // // Complex &other = c1;
    // // Complex *const this = &c2;
    // Complex(const Complex &other) : real(other.real), imaginary(other.imaginary)
    // {
    //     cout << "Complex(const Complex &other)" << endl;
    // }

    // // Complex &other = c1;
    // // Complex *const this = &c2;
    // Complex(const Complex &other)
    // {
    //     cout << "Complex(const Complex &other)" << endl;
    //     memcpy(this, &other, sizeof(other));
    // }
    void print_record(void)
    {
        cout << "Real number      :   " << this->real << endl;
        cout << "Imaginary number :   " << this->imaginary << endl;
    }
};
int main()
{
    Complex c1(10, 20); // On c1 object parameterized constructor gets called
    Complex c2 = c1;    // On c2 object copy constructor gets called
    return 0;
}