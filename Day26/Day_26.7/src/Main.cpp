#include <iostream>
using namespace std;
class Base
{
private:
    int number1;
    int number2;

public:
    Base(void) : number1(10), number2(20) {}
    virtual void f1(void)
    {
        cout << "Base::f1" << endl;
    }
    virtual void f2(void)
    {
        cout << "Base::f2" << endl;
    }
    virtual void f3(void)
    {
        cout << "Base::f3" << endl;
    }
    void f4(void)
    {
        cout << "Base::f4" << endl;
    }
    void f5(void)
    {
        cout << "Base::f5" << endl;
    }
};

class Derived : public Base
{
private:
    int number3;

public:
    Derived(void) : number3(30) {}
    virtual void f1(void)
    {
        cout << "Derived::f1" << endl;
    }
    void f2(void)
    {
        cout << "Derived::f2" << endl;
    }
    void f4(void)
    {
        cout << "Derived::f4" << endl;
    }
    void f5(void)
    {
        cout << "Derived::f5" << endl;
    }
    void f6(void)
    {
        cout << "Derived::f6" << endl;
    }
};
int main()
{
    Derived derived;
    cout << "Size :   " << sizeof(derived) << endl;
    return 0;
}
