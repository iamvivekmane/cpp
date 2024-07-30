#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0);
    void print_record();
};

Complex::Complex(int real, int imaginary) : real(real), imaginary(imaginary) {}
void Complex::print_record()
{
    cout << "Real number      :   " << real << endl;
    cout << "Imaginary number :   " << imaginary << endl;
}
int main()
{
    Complex c1;
    Complex c2(10);
    Complex c3(10, 20);
    c1.print_record();
    c2.print_record();
    c3.print_record();
    return 0;
}