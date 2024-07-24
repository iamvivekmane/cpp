#include <iostream>
#include "../include/complex.h"

using namespace std;

using namespace kdac;

// Global method to accept record from user by passing the object pointer
void accept_record(Complex *ptr)
{
    int real;
    int imaginary;
    cout << "Real         :   ";
    cin >> real;
    ptr->set_real(real);
    cout << "Imaginary    :   ";
    cin >> imaginary;
    ptr->set_imaginary(imaginary);
}

// Global method to print record by passing the object pointer
void print_record(Complex *ptr)
{
    int real = ptr->get_real();
    int imaginary = ptr->get_imaginary();

    cout << "---------------" << endl;
    cout << "Real         :   " << real << endl;
    cout << "Imaginary    :   " << imaginary << endl;
}

// Global method to take user input on choice
int menu_list()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Accept record" << endl;
    cout << "2.Print record" << endl;
    cout << "Enter choice :   ";
    cin >> choice;
    return choice;
}

int main()
{
    int choice;
    Complex c1;
    c1.init_complex(0, 0);

    while ((choice = menu_list()) != 0)
    {
        switch (choice)
        {
        case 1:
            accept_record(&c1);
            break;

        case 2:
            print_record(&c1);
            break;
        }
    }

    return 0;
}