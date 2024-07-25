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
    // Complex c1;         // Complex(void)
    // Complex c2(10);     // Complex(int value)
    // Complex c3(10, 20); // Complex(int real,int imaginary)

    // Complex c4(); // warning: empty parentheses interpreted as a function declaration

    // Complex c5 = 40; // Complex c5(40); // Complex(int value)

    // // Complex(50, 60); // Anonymous object : Complex(int real,int imaginary)
    // // Complex(50, 60).print_record();

    // // Complex c6 = 70, 80; // Error Complex c6(70),80;

    // Complex c7 = (70, 80); // Error Complex c7(80); Complex c7(int value);

    // Complex c8 = {90, 100}; // Non aggregate type but still working

    return 0;
}