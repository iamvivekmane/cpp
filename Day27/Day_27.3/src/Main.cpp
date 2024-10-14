#include <iostream>
#include <typeinfo>
using namespace std;
class Base
{
public:
    virtual void print(void)
    {
    }
};
class Derived : public Base
{
    void print(void)
    {
    }
};
int main()
{
    //     Base *ptr = new Derived(); // upcasting
    //     cout << typeid(ptr).name() << endl;
    //     cout << typeid(*ptr).name() << endl;
    // ---------------------------------------------

    Base *ptr = NULL;
    cout << typeid(ptr).name() << endl;
    cout << typeid(*ptr).name() << endl;
    delete ptr;
    return 0;
}
