#include <iostream>
using namespace std;
class B
{
public:
    void sum(void);
};
class A
{
private:
    int num1;
    int num2;

public:
    A(int num1, int num2);
    friend void B::sum(void);
};

A::A(int num1 = 0, int num2 = 0)
{
    this->num1 = num1;
    this->num2 = num2;
}
void B::sum(void)
{
    A a(20, 30);
    int result = a.num1 + a.num2;
    cout << "Result   :   " << result << endl;
}
int main()
{
    B b;
    b.sum();
    return 0;
}