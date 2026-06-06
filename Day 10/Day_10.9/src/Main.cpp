#include <iostream>
using namespace std;
class Test
{
private:
    int num1;
    int num2;

public:
    Test(void) : num1(10), num2(20)
    {
    }
    // Test *const this
    void show(void)
    {
        cout << "Num1	:	" << this->num1 << endl;
        cout << "Num1	:	" << this->num2 << endl;
    }
    // const Test *const this;
    void print(void) const
    {
        cout << "Num1	:	" << this->num1 << endl;
        cout << "Num1	:	" << this->num2 << endl;
    }
};
int main(void)
{
    const Test t1;
    t1.print();
    // show() cannot be called because object is constant and the show function is not
    // t1.show(); // Not OK
    return 0;
}