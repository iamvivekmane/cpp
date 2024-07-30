#include <iostream>
#include "../include/IllegalArgumentException.h"
#include "../include/Complex.h"
using namespace std;
using namespace kdac;
void accept_record(Complex &complex) throw(IllegalArgumentException)
{
    int real;
    int imaginary;
    cout << "Real number      :   ";
    cin >> real;
    complex.set_real(real);
    cout << "Imaginary number :   ";
    cin >> imaginary;
    complex.set_imaginary(imaginary);
}

void print_record(const Complex &complex) throw()
{
    cout << "---------------------" << endl;
    cout << "Real number      :   " << complex.get_real() << endl;
    cout << "Imaginary number :   " << complex.get_real() << endl;
}

int menu_list(void)
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Accept record" << endl;
    cout << "2.Print record" << endl;
    cout << "Enter choice     :   ";
    cin >> choice;
    return choice;
}
int main()
{
    try
    {
        int choice;
        Complex complex;
        try
        {
            while ((choice = menu_list()) != 0)
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
        }
        catch (IllegalArgumentException &ex)
        {
            cout << ex.getMessage() << endl;
        }
    }
    catch (...)
    {
        cout << "Exception" << endl;
    }

    return 0;
}