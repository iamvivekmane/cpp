#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print_record(void)
    {
        cout << "Real number       :   " << this->real << endl;
        cout << "Imaginary number  :   " << this->imaginary << endl;
    }
    friend Complex operator+(Complex &c1, Complex &c2)
    {
        Complex temp;
        temp.real = c1.real = c2.real;
        temp.real = c1.real = c2.real;
        return temp;
    }
};

int main()
{
    Complex c1(10, 20);
    Complex c2(30, 40);
    Complex c3 = c1 + c1;
    c3.print_record();
    return 0;
}