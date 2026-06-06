#include <iostream>
using namespace std;
// Adding class in the namespace kdac
namespace kdac
{
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
    };
}
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