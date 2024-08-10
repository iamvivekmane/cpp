#include <iostream>
using namespace std;
class Test
{
private:
    int num1;

protected:
    int num2;

public:
    int num3;

public:
    Test(void)
    {
        this->num1 = 10;
        this->num2 = 20;
        this->num3 = 30;
    }
    int getNum1(void)
    {
        return this->num1;
    }
    int getNum2(void)
    {
        return this->num2;
    }
};
int main(void)
{
    Test t;
    cout << "Num1	:	" << t.getNum1() << endl;
    cout << "Num2	:	" << t.getNum2() << endl;
    cout << "Num3	:	" << t.num3 << endl;
    return 0;
}