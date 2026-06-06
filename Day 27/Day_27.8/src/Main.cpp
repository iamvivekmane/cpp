#include <iostream>
using namespace std;
class Base
{
private:
    int number1;
    int number2;

public:
    Base(void)
    {
        this->number1 = 0;
        this->number2 = 0;
    }
    void set_number1(int number1)
    {
        this->number1 = number1;
    }
    void set_number2(int number2)
    {
        this->number2 = number2;
    }
    virtual void print_record(void)
    {
        cout << this->number1 << endl;
        cout << this->number2 << endl;
    }
};
class Derived : public Base
{
private:
    int number3;

public:
    Derived(void)
    {
        this->number3 = 0;
    }
    void set_number3(int number3)
    {
        this->number3 = number3;
    }
    void print_record(void)
    {
        Base::print_record();
        cout << "number3 :   " << this->number3 << endl;
    }
};
int main()
{
    // Base *ptrBase = new Base();
    // ptrBase->set_number1(10);
    // ptrBase->set_number2(20);
    // Derived *ptrDerived = static_cast<Derived *>(ptrBase); // Valid
    // if (ptrDerived != NULL)
    // {
    //     ptrDerived->set_number3(30);
    //     ptrDerived->print_record();
    //     delete ptrBase;
    // }
    // else
    // {
    //     cout << "NULL" << endl;
    // }
    // // Ouput: NULL
    // //  ---------------------------------------------------------------------

    // Base b1;
    // Base &b2 = b1; // Base *const b2 = &b1
    // b2.set_number1(10);
    // b2.set_number2(20);
    // Derived &d1 = dynamic_cast<Derived &>(b2); // Valid
    // d1.set_number3(30);
    // d1.print_record();
    // // Output:  bad_cast
    // //  ---------------------------------------------------------------------

    Base *ptrBase = new Base();
    ptrBase->set_number1(10);
    ptrBase->set_number2(20);
    Derived *ptrDerived = dynamic_cast<Derived *>(ptrBase); // Valid
    if (ptrDerived != NULL)
    {
        ptrDerived->set_number3(30);
        ptrDerived->print_record();
        delete ptrBase;
    }
    else
    {
        cout << "NULL" << endl;
    }
    return 0;
}