#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(void) : real(0), imaginary(0)
    {
        cout << "Complex (void)" << endl;
    }
    Complex(int real, int imaginary) : real(real), imaginary(imaginary)
    {
        cout << "Complex (int real ,int imaginary)" << endl;
    }
    ~Complex(void)
    {
        cout << "~Complex(void)" << endl;
    }
    void print_record(void)
    {
        cout << "Real number    :    " << this->real << endl;
        cout << "Real imaginary :    " << this->imaginary << endl;
    }
};
int main()
{
    //     Complex *ptr = new Complex(); // Ok
    //     Complex *ptr = new Complex;   // Complex::Complex(void)
    //     ptr->print_record();
    //     delete ptr; // Complex::~Complex(void)
    // // -----------------------------------------------------

    // Complex *ptr = new Complex(10, 20); // Complex::Complex(int real, int imaginary)
    // ptr->print_record();
    // delete ptr; // Complex::~Complex(void)
    // // -----------------------------------------------------

    Complex *ptr = new Complex[3];
    for (int i = 0; i < 3; i++)
    {
        ptr[i].print_record();
    }
    delete[] ptr;
    ptr = NULL;

    return 0;
}