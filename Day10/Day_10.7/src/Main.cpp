#include <iostream>
using namespace std;

class A
{
public:
    void print(void) const;
};
class B
{
private:
    int number;

public:
    B(void);
    friend void A::print() const;
};
B::B(void)
{
    this->number = 10;
}
void A::print() const
{
    B obj;
    cout << "Number	:	" << obj.number << endl;
}
int main(void)
{
    A a;
    a.print();
    return 0;
}