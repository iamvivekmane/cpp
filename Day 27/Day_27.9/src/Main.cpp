#include <iostream>
using namespace std;
class Base
{
private:
    int *ptr;

public:
    Base(void)
    {
        cout << "Base(void)" << endl;
        this->ptr = new int[3];
    }
    virtual ~Base(void)
    {
        cout << "~Base(void)" << endl;
        delete[] this->ptr;
    }
};

class Derived : public Base
{
private:
    int *ptr;

public:
    Derived(void)
    {
        cout << "Derived(void)" << endl;
        this->ptr = new int[3];
    }
    ~Derived(void)
    {
        cout << "~Derived(void)" << endl;
        delete[] this->ptr;
    }
};
int main()
{
    // Base base;
    // cout << endl;
    // // -------------------------------------------------------------------

    // Base *ptr = new Base();
    // cout << endl;
    // delete ptr;
    // // -------------------------------------------------------------------

    // Derived derived;
    // cout << endl;
    // // -------------------------------------------------------------------

    // Derived *ptr = new Derived();
    // cout << endl;
    // delete ptr;
    // // -------------------------------------------------------------------

    Base *ptr = new Derived();
    cout << endl;
    delete ptr;

    return 0;
}