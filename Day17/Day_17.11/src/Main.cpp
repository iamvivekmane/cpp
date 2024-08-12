#include <iostream>
using namespace std;
class B; // Forward declaration
class A
{
private:
    int num1;

public:
    void show_record(void);
    friend class B;
};

class B
{
private:
    int num2;

public:
    void display_record(void);
    friend class A;
};

void A::show_record(void)
{
    B b;
    b.num2 = 100;
    cout << "Element   :   " << b.num2 << endl;
}

void B::display_record(void)
{
    A a;
    a.num1 = 200;
    cout << "Element   :   " << a.num1 << endl;
}
int main()
{
    A a;
    a.show_record();
    B b;
    b.display_record();
    return 0;
}