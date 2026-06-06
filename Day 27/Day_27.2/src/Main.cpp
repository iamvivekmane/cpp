#include <iostream>
#include <typeinfo>
using namespace std;
class Base
{
public:
    void print(void)
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
    // Base base;
    // cout << typeid(base).name() << endl;
    // // --------------------------------------------

    // Derived Derived;
    // cout << typeid(Derived).name() << endl;
    // // --------------------------------------------

    // Base *ptr = new Base();
    // // cout << typeid(ptr).name() << endl;
    // cout << typeid(*ptr).name() << endl;
    // // --------------------------------------------

    // Derived *ptr = new Derived();
    // // cout << typeid(ptr).name() << endl;
    // cout << typeid(*ptr).name() << endl;
    // // --------------------------------------------

    Base *ptr = new Derived(); // upcasting
    cout << typeid(ptr).name() << endl;
    cout << typeid(*ptr).name() << endl;
    return 0;
}