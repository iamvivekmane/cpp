#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;
    Complex(const Complex &other)
    {
        cout << "Complex(const Complex &other)" << endl;
        this->real = real;
        this->imaginary = imaginary;
    }

public:
    Complex(void)
    {
        cout << "Complex(void)" << endl;
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(int real, int imaginary)
    {
        cout << "Complex(int real, int imaginary)" << endl;
        this->real = real;
        this->imaginary = imaginary;
    }

    static void test(void)
    {
        Complex c1(10, 20);
        Complex c2 = c1;
    }
};
int main()
{
    Complex c1(10, 20);
    Complex c2 = c1;
    Complex::test();
    return 0;
}