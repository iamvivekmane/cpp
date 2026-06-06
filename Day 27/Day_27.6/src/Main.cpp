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
    void print_record(void)
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
    // Base base;
    // base.set_number1(10);
    // base.set_number2(20);
    // base.print_record();
    // // -------------------------------------------------

    // Derived derived;
    // derived.set_number1(10);
    // derived.set_number2(20);
    // derived.set_number3(30);
    // derived.print_record();
    // // -------------------------------------------------

    // Base *ptrBase = new Derived(); // Upcasting
    // ptrBase->set_number1(10);
    // ptrBase->set_number2(20);
    // Derived *ptrderived = static_cast<Derived*>(ptrBase); // Downcasting
    // ptrderived->set_number3(30);
    // ptrderived->print_record();
    // delete ptrBase;
    // // -------------------------------------------------

    Base *ptrBase = new Base();
    ptrBase->set_number1(10);
    ptrBase->set_number2(20);
    Derived *ptrDerived = static_cast<Derived *>(ptrBase);
    ptrDerived->set_number3(30);
    ptrDerived->print_record();
    delete ptrBase;
    return 0;
}