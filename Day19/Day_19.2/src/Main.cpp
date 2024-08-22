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
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex(const Complex &other)
    {
        cout << "Complex (const Complex &other)" << endl;
        this->real = other.real;
        this->imaginary = other.imaginary;
    }
    Complex operator=(const Complex &other)
    {
        cout << "void operator=(const Complex &other)" << endl;
        this->real = other.real;
        this->imaginary = other.imaginary;
        return *this;
    }
    friend ostream &operator<<(ostream &cout, const Complex &other)
    {
        cout << "Real number      :   " << other.real << endl;
        cout << "Imaginary number :   " << other.imaginary << endl;
        return cout;
    }
};
int main()
{
    // Complex c1(10, 20);
    // Complex c2;
    // c2 = c1;
    // cout << c2;
    // // ----------------------------------------------------------------

    Complex c1(10, 20);
    Complex c2;
    Complex c3;
    c3 = c2 = c1; // c3.operator = (c2.operator = (c1))
    cout << c3 << endl;
    return 0;
}