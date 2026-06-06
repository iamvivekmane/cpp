#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    // Parameterless constructor
    Complex(void)
    {
        this->real = 0;
        this->imaginary = 0;
    }

    // Parameterized constructor
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Function to accept record from the user
    void accept_record()
    {
        cout << "Real     :   ";
        cin >> real;
        cout << "Imaginary:   ";
        cin >> imaginary;
    }

    // Function to print record
    void print_record()
    {
        cout << "-------------" << endl;
        cout << "Real     :   " << real << endl;
        cout << "Imaginary:   " << imaginary << endl;
    }
};
int main()
{
    // Declared array of objects and initialized it with initializer list
    // Complex arr[3] = {Complex(10, 20), Complex(30, 40), Complex(50, 60)};
    // For loop to print record for 3 objects
    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].print_record();
    // }

    // Declared array of objects
    Complex arr[3];

    // For loop to accept record for 3 objects
    for (int i = 0; i < 3; i++)
    {
        arr[i].accept_record();
    }

    // For loop to print record for 3 objects
    for (int i = 0; i < 3; i++)
    {
        arr[i].print_record();
    }

    return 0;
}