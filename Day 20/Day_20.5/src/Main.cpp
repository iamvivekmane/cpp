#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(void)
    {
        cout << "Complex(void)" << endl;
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(int value)
    {
        cout << "Complex(int value)" << endl;
        this->real = value;
        this->imaginary = value;
    }
    Complex(int real, int imaginary)
    {
        cout << "Complex(int real, int imaginary)" << endl;
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex &operator=(const Complex &other)
    {
        cout << "Complex &operator=(const Complex &other)" << endl;
        this->real = other.real;
        this->imaginary = other.imaginary;
        return *this;
    }
    // Conversion function
    operator int()
    {
        return this->real;
    }
    void print_record(void)
    {
        cout << "Real       :   " << this->real << endl;
        cout << "Imaginary  :   " << this->imaginary << endl;
    }
};
int main()
{
    int number = 10;
    Complex c1 = number;
    // Complex c1(number);
    c1.print_record();

    return 0;
}