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
        this->real = 0;
        this->imaginary = 0;
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    friend istream &operator>>(istream &cin, Complex &other)
    {
        cout << "Real number      :   ";
        cin >> other.real;
        cout << "Imaginary number :   ";
        cin >> other.imaginary;
        return cin;
    }
    friend ostream &operator<<(ostream &cout, const Complex &other)
    {
        cout << "Real number      :   " << other.real << endl;
        cout << "Imaginary number :   " << other.imaginary << endl;
        return cout;
    }
};
int main()
{
    // Complex c1(10, 20);
    // cin >> c1;
    // cout << c1;
    // // --------------------------------------------------------

    Complex c1, c2;
    cin >> c1 >> c2;
    cout << c1 << c2;
    // // --------------------------------------------------------
    return 0;
}