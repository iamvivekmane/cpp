#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(void)
    {
        this->real = 0;
        this->imag = 0;
    }
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void acceptRecord(void)
    {
        cout << "Enter real number	:	";
        cin >> this->real;
        cout << "Enter imag number	:	";
        cin >> this->imag;
    }
    void printRecord(void)
    {
        cout << "Real Number	:	" << this->real << endl;
        cout << "Imag Number	:	" << this->imag << endl;
        cout << endl;
    }
};
int main(void)
{
    Complex arr[3] = {Complex(10, 20), Complex(30, 40), Complex(50, 60)};
    for (int i = 0; i < 3; i++)
    {
        arr[i].printRecord();
    }

    return 0;
}
int main1(void)
{
    Complex arr[3];
    for (int i = 0; i < 3; i++)
    {
        arr[i].acceptRecord();
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].printRecord();
    }

    return 0;
}