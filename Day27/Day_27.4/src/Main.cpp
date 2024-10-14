#include <iostream>
#include <fstream>
using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    Complex(void)
    {
        this->real = 10;
        this->imaginary = 20;
    }
    friend ostream &operator<<(ostream &cout, const Complex &other)
    {
        cout << other.real << " " << other.imaginary;
        return cout;
    }
    friend int main();
};
int main()
{
    // Complex c1;
    // cout << c1;
    // Complex *ptr = &c1;
    // int *prtInt = (int *)ptr;
    // *prtInt = 50;
    // prtInt = prtInt + 1;
    // *prtInt = 60;
    // cout << c1 << endl;
    // -----------------------------------------------------------------

    // Complex c1;
    // cout << c1 << endl;
    // Complex *ptr = &c1;
    // // reinterpret_cast<Dest type>(src);
    // int *prtInt = (int *)ptr;
    // *prtInt = 50;
    // prtInt = prtInt + 1;
    // *prtInt = 60;
    // cout << c1 << endl;
    // -----------------------------------------------------------------

    ofstream fout;
    fout.open("complex.db", ios::out | ios::binary);
    if (fout.is_open())
    {
        Complex c1;
        fout.write(reinterpret_cast<char *>(&c1), sizeof(Complex));
        fout.close();
    }
    else
    {
        cout << "File IO error" << endl;
    }

    return 0;
}