#include <iostream>
#include <string>
using namespace std;
namespace kdac
{
    class IllegalArgumentException
    {
    private:
        string message;

    public:
        IllegalArgumentException(const string message) throw() : message(message)
        {
        }
        string get_message(void) const throw()
        {
            return this->message;
        }
    };
    class Complex
    {
    private:
        int real;
        int imaginary;

    public:
        Complex(void) throw() : real(0), imaginary(0)
        {
        }
        Complex(int real, int imaginary) throw(IllegalArgumentException)
        {
            this->set_real(real);
            this->set_imaginary(imaginary);
        }
        int get_real(void) const throw()
        {
            return this->real;
        }
        void set_real(const int real) throw(IllegalArgumentException)
        {
            if (real < 0)
                throw IllegalArgumentException("Negative value not allowed");
            this->real = real;
        }
        int get_imaginary(void) const throw()
        {
            return this->imaginary;
        }
        void set_imaginary(const int imaginary) throw(IllegalArgumentException)
        {
            if (imaginary < 0)
                throw IllegalArgumentException("Negative value not allowed");
            this->imaginary = imaginary;
        }
    };
}
using namespace kdac;
void accept_record(Complex &complex) throw(IllegalArgumentException)
{
    int real;
    cout << "Real number    	:	";
    cin >> real;
    complex.set_real(real);
    int imaginary;
    cout << "Imaginary number	:	";
    cin >> imaginary;
    complex.set_imaginary(imaginary);
}
void print_record(const Complex &complex) throw()
{
    cout << "-----------------------" << endl;
    cout << "Real Number    	:	" << complex.get_real() << endl;
    cout << "Imag Number    	:	" << complex.get_imaginary() << endl;
}
int menu_list(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Accept Record" << endl;
    cout << "2.Print Record" << endl;
    cout << "Enter choice   	:	";
    cin >> choice;
    return choice;
}
int main(void)
{
    try
    {
        int choice;
        Complex complex;
        while ((choice = ::menu_list()) != 0)
        {
            try
            {
                switch (choice)
                {
                case 1:
                    accept_record(complex);
                    break;
                case 2:
                    print_record(complex);
                    break;
                }
            }
            catch (IllegalArgumentException &ex)
            {
                cout << ex.get_message() << endl;
            }
        }
    }
    catch (...)
    {
        cout << "Exception" << endl;
    }
    return 0;
}