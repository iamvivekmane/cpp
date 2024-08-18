#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void print_record(void)
    {
        cout << "Real number       :   " << this->real << endl;
        cout << "Imaginary number  :   " << this->imaginary << endl;
    }
    friend Complex operator+(Complex &c1, Complex &c2)
    {
        Complex temp;
        temp.real = c1.real + c2.real;
        temp.imaginary = c1.imaginary + c2.imaginary;
        return temp;
    }
    friend Complex operator+(Complex &c1, int value)
    {
        Complex temp;
        temp.real = c1.real + value;
        temp.imaginary = c1.imaginary + value;
        return temp;
    }
    friend Complex operator+(int value, Complex &c1)
    {
        Complex temp;
        temp.real = c1.real + value;
        temp.imaginary = c1.imaginary + value;
        return temp;
    }
    friend bool operator==(Complex &c1, Complex &c2)
    {
        return c1.real == c2.real && c1.imaginary == c2.imaginary;
    }
    friend Complex operator+=(Complex &c1, Complex &c2)
    {
        c1.real += c2.real;
        c1.imaginary += c2.imaginary;
        return c1;
    }
    friend Complex operator++(Complex &c1)
    {
        Complex temp;
        temp.real = ++c1.real;
        temp.imaginary = ++c1.imaginary;
        return temp;
    }
    friend Complex operator++(Complex &c1, int)
    {
        Complex temp;
        temp.real = c1.real++;
        temp.imaginary = c1.imaginary++;
        return temp;
    }
    friend Complex operator--(Complex &c1)
    {
        Complex temp;
        temp.real = --c1.real;
        temp.imaginary = --c1.imaginary;
        return temp;
    }
};

int main()
{
    // Complex c1(10, 20);
    // Complex c2(30, 40);
    // Complex c3 = c1 + c2;
    // c3.print_record();
    // // ----------------------------------------------------------------
    // Complex c1(10, 20);
    // Complex c2 = c1 + 5;
    // c1.print_record();
    // c2.print_record();
    // // ----------------------------------------------------------------
    // Complex c1(10, 20);
    // // Complex c2 = c1 + 5; //c2 = 5.operator+(c1); //Not ok
    // Complex c2 = 5 + c1; // c2 =operator+(5,c1);
    // c1.print_record();
    // c2.print_record();
    // // ----------------------------------------------------------------
    // Complex c1(10, 20);
    // Complex c2(30, 40);
    // bool status = c1 == c2;
    // if (status)
    // {
    //     cout << "Equal" << endl;
    // }
    // else
    // {
    //     cout << "Not Equal" << endl;
    // }
    // // ----------------------------------------------------------------
    // Complex c1(10, 20);
    // Complex c2(10, 20);
    // c2 += c1;
    // c2.print_record();
    // // ----------------------------------------------------------------
    // Complex c1(10, 20);
    // Complex c2 = ++c1;
    // c1.print_record();
    // c2.print_record();
    // // ----------------------------------------------------------------
    // Complex c1(10, 20);
    // Complex c2 = --c1;
    // c1.print_record();
    // c2.print_record();
    // // ----------------------------------------------------------------
    // Complex c1(10, 20);
    // Complex c2 = c1++;
    // c1.print_record();
    // c2.print_record();
    // // ----------------------------------------------------------------
    return 0;
}