#include <iostream>
using namespace std;
class A
{
private:
    int number1;

public:
    A(void)
    {
        // cout << "A(void)" << endl;
        this->number1 = 10;
    }
    A(int number1)
    {
        // cout << "A(int number1)" << endl;
        this->number1 = number1;
    }
    void print_record(void)
    {
        cout << "Number1  :   " << this->number1 << endl;
    }
    ~A(void)
    {
        // cout << "~A(void)" << endl;
    }

protected:
    void show_record(void)
    {
        cout << "Number1  :   " << this->number1 << endl;
    }
};
class B : virtual public A
{
private:
    int number2;

public:
    B(void)
    {
        // cout << "B(void)" << endl;
        this->number2 = 20;
    }
    B(int number2)
    {
        // cout << "B(int number2)" << endl;
        this->number2 = number2;
    }
    B(int number1, int number2) : A(number1)
    {
        this->number2 = number2;
    }
    void print_record(void)
    {
        A::show_record();
        this->show_record();
    }
    ~B(void)
    {
        // cout << "~B(void)" << endl;
    }

protected:
    void show_record(void)
    {
        cout << "Number2  :   " << this->number2 << endl;
    }
};
class C : virtual public A
{
private:
    int number3;

public:
    C(void)
    {
        // cout << "C(void)" << endl;
        this->number3 = 30;
    }
    C(int number2)
    {
        // cout << "C(int number2)" << endl;
        this->number3 = number3;
    }
    C(int number1, int number3) : A(number1)
    {
        this->number3 = number3;
    }
    void print(void)
    {
        A::show_record();
        this->show_record();
    }
    ~C(void)
    {
        // cout << "~C(void)" << endl;
    }

protected:
    void show_record(void)
    {
        cout << "Number3  :   " << this->number3 << endl;
    }
};
class D : public B, public C
{
private:
    int number4;

public:
    D(void)
    {
        // cout << "D(void)" << endl;
        this->number4 = 40;
    }
    D(int number1, int number2, int number3, int number4) : A(number1), B(number1, number2), C(number1, number3)
    {
        // cout << "D(int number1, int number2, int number3, int number4)" << endl;
        this->number4 = 40;
    }
    void print_record(void)
    {
        A::show_record(); // Number1
        B::show_record(); // Number2
        C::show_record(); // Number3
        cout << "Number4  :   " << this->number4 << endl;
    }
    ~D(void)
    {
        // cout << "~D(void)" << endl;
    }
};
int main()
{
    D obj(50, 60, 70, 80); // num1, num2, num3, num4
    obj.print_record();
    return 0;
}