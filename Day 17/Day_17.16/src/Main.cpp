#include <iostream>
using namespace std;

int main()
{
    // Local class
    class Complex
    {
    private:
        int real;
        int imaginary;

    public:
        Complex(void) : real(10), imaginary(20)
        {
        }
        void print_record(void)
        {
            cout << "Real number      :   " << this->real << endl;
            cout << "Imaginary number :   " << this->imaginary << endl;
        }
    };
    Complex c1;
    c1.print_record();
    return 0;
}