#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Function to initialize object
    // Complex *const this = &c1
    void init_complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Function to accept record from user
    //  Complex *const this = &c1
    void accept_record(void)
    {
        cout << "Real         :   ";
        cin >> real;
        cout << "Imaginary    :   ";
        cin >> imaginary;
    }

    // Function to get real number
    //  Complex *const this = &c1
    int get_real()
    {
        return this->real;
    }

    // Function to set real number
    // Complex *const this = &c1
    void set_real(int real)
    {
        this->real = real;
    }

    // Function to get imaginary number
    // Complex *const this = &c1
    int get_imaginary()
    {
        return this->imaginary;
    }

    // Function to set imaginary number
    // Complex *const this = &c1
    void set_imaginary(int imaginary)
    {
        this->imaginary = imaginary;
    }

    // Function to print record
    //  Complex *const this = &c1
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
    c1.init_complex(0, 0); // c1.init_complex(&c1,0,0);
    // c1.accept_record();              // c1.accept_record(&c1);

    c1.set_real(50);      // c1.set_real(&c1,50)
    c1.set_imaginary(60); // c1.set_imaginary(&c1,60);
    // c1.print_record();               // c1.print_record(&c1);

    // Declaring and initializing local variables with get methods
    int real = c1.get_real();      // c1.get_real();
    int imaginary = c1.get_real(); //  c1.get_imaginary();

    cout << real << "   " << imaginary << endl;
    return 0;
}