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
        this->number1 = 10;
        this->number2 = 20;
    }
    Base(int number1, int number2)
    {
        this->number1 = number1;
        this->number2 = number2;
    }
    void show_record(void)
    {
        cout << "Number1  :   " << this->number1 << endl;
        cout << "Number2  :   " << this->number2 << endl;
    }
    void print_record(void)
    {
        cout << "Number1  :   " << this->number1 << endl;
        cout << "Number2  :   " << this->number2 << endl;
    }
};
class Derived : public Base
{
private:
    int number3;

public:
    Derived(void)
    {
        this->number3 = 30;
    }
    Derived(int number1, int number2, int number3) : Base(number1, number2)
    {
        this->number3 = number3;
    }
    void print_record(void)
    {
        Base::print_record();
        cout << "Number3  :   " << this->number3 << endl;
    }
    void display_record(void)
    {
        Base::show_record();
        cout << "Number3  :   " << this->number3 << endl;
    }
};
int main()
{
    // Base base;
    // base.show_record();  // Base::show_record();
    // base.print_record(); // Base::print_record();
    // // base.Derived::print_record(); // Not ok
    // // base.display_record(); // Not ok
    // // ----------------------------------------------------------------

    // Base *ptrBase = new Base();
    // ptrBase->show_record();
    // ptrBase->print_record();
    // ptrBase->Derived::print_record();  // Not ok
    // ptrBase->display_record();        //Not ok
    // delete ptrBase;
    // // ----------------------------------------------------------------

    // Derived derived;
    // derived.show_record();        // Base::show_record();
    // derived.print_record();       // Derived::print_record();
    // derived.Base::print_record(); // Base::print_record();
    // derived.display_record();     // Derived::display_record();
    // // ----------------------------------------------------------------

    // Derived *ptrDerived = new Derived();
    // ptrDerived->show_record();
    // ptrDerived->print_record();
    // ptrDerived->Base::print_record();
    // ptrDerived->display_record();
    // delete ptrDerived;
    // // ----------------------------------------------------------------

    // Base b1(50, 60);
    // Base b2 = b1;
    // b2.print_record();         //Base::print_record();
    // // ----------------------------------------------------------------

    // Derived d1(50, 60, 70), d2;
    // d2 = d1;
    // d2.print_record(); // Derived::print_record();
    // // ----------------------------------------------------------------

    // Derived derived(50, 60, 70);
    // Base base;
    // base = derived;      // Object Slicing
    // base.print_record(); // Base::print_record();
    // // ----------------------------------------------------------------

    // Derived *ptrDerived = new Derived();
    // ptrDerived->print_record();         // Derived::print_record();
    // Base *ptrBase = (Base *)ptrDerived; // upcasting:OK
    // Base *ptrBase = ptrDerived;         // upcasting
    // ptrBase->print_record();
    // delete ptrDerived;
    // // ----------------------------------------------------------------

    // Base *ptrbase = new Derived(); // Upcasting Ok
    // // ptrbase->print_record();       // Base::print_record();
    // Derived *ptrDerived = (Derived *)ptrbase; // Downcasting : OK
    // ptrDerived->print_record();
    // delete ptrbase;
    // // ----------------------------------------------------------------

    // Derived d1;
    // Derived &d2 = d1;         // Derived *const d2 = &d1
    // Base &b1 = d2;             // Base *const b1 = d2 //Upcasting
    // b1.print_record();
    // // ----------------------------------------------------------------

    Derived d1;
    Base &b1 = d1; // Base *const b1 = &d2 // Upcasting
    // b1.print_record();           // Base::print_record();

    Derived &d2 = (Derived &)b1; // Downcasting
    d2.print_record();           // Derived::print_record();

    return 0;
}
