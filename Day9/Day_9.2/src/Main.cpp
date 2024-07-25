#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(void) : Complex(0, 0) {} // Delegating constructor
    Complex(int real, int imaginary)
    {
        cout << "Complex(int real,int imaginary)" << endl;
        this->real = real;
        this->imaginary = imaginary;
    }
    void print_record(void)
    {
        cout << "-----------------" << endl;
        cout << "Real         :   " << real << endl;
        cout << "Imaginary    :   " << imaginary << endl;
    }
};

int main()
{
    Complex c1;
    c1.print_record();
    return 0;
}