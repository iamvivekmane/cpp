#include <iostream>
using namespace std;
class A
{
private:
    int number;

public:
    A(void) : number(10) {}
    int get_number(void)
    {
        return this->number;
    }
    friend class B;
    friend class C;
};
class B : public A
{
public:
    void print(void)
    {
        cout << "Number   :   " << this->get_number() << endl;
    }
};
class C : public A
{
public:
    void print(void)
    {
        cout << "Number   :   " << this->number << endl;
    }
};
int main()
{
    B b;
    b.print();

    C c;
    c.print();
    return 0;
}
