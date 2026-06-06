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
    virtual void f5(void)
    {
        cout << "Derived::f5" << endl;
    }
    virtual void f6(void)
    {
        cout << "Derived::f6" << endl;
    }
};
int main()
{
    // Base base;
    // base.f1(); => early binding
    // base.f2(); => early binding
    // base.f3(); => early binding
    // base.f4(); => early binding
    // base.f5(); => early binding
    // base.f6(); => error -> function does not exist
    // -------------------------------

    // Base *ptr = new Base();
    // ptr->f1(); => late binding
    // ptr->f2(); => late binding
    // ptr->f3(); => late binding
    // ptr->f4(); => early binding
    // ptr->f5(); => late binding
    // ptr->f6();
    // delete ptr;
    // -------------------------------

    // Base *ptr = new Derived();
    // ptr->f1();
    // ptr->f2();
    // ptr->f3();
    // ptr->f4();
    // ptr->f5();
    // ptr->f6();
    // delete ptr;
    // -------------------------------

    // Base *ptr = new Derived();
    // ptr->f1(); => late binding
    // ptr->f2(); => late binding
    // ptr->f3(); => late binding
    // ptr->f4(); => early binding
    // ptr->f5(); => early binding
    // ptr->f6();
    // delete ptr;
    // -------------------------------
    return 0;
}

// Algorithm to decide wheather it is early binding or late binding
/*
// Check wheather function is exist in caller type or not (Base/Derived)
if (function is not exist in caller data type)
{
    Error : Function is not a member of caller data type
}
else{
    Check type of caller(object, pointer / reference)
    if (caller is object)
    {
        Early Binding : caller type / inherited function will call
    }
    else{
        chech function is virtual or non virtual
        if (function is non virtual)
        {
            Early binding : Caller type / inherited function will call
        }
        else
        {
            Late binding : Object type / inherited function will call
        }
}
}
}
*/