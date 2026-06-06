#include <iostream>
using namespace std;
class B
{
public:
    void sum(void);
    void subtraction(void);
    void multiplication(void);
    void division(void);
};
class A
{
private:
    int num1;
    int num2;

public:
    A(int num1, int num2);
    // friend void B::sum(void);
    // friend void B::subtraction(void);
    // friend void B::multiplication(void);
    // friend void B::division(void);
    friend class B;
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
void B::subtraction(void)
{
    A a(20, 30);
    int result = a.num1 - a.num2;
    cout << "Result   :   " << result << endl;
}
void B::multiplication(void)
{
    A a(20, 30);
    int result = a.num1 * a.num2;
    cout << "Result   :   " << result << endl;
}
void B::division(void)
{
    A a(20, 30);
    int result = a.num1 / a.num2;
    cout << "Result   :   " << result << endl;
}
int main()
{
    B b;
    b.sum();
    b.subtraction();
    b.multiplication();
    b.division();
    return 0;
}