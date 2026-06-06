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
    int get_num1(void)
    {
        return this->num1;
    }
    int get_num2(void)
    {
        return this->num2;
    }
};
int main(void)
{
    Test t;
    cout << "Number 1	:	" << t.get_num1() << endl;
    cout << "Number 2	:	" << t.get_num2() << endl;
    cout << "Number 3	:	" << t.num3 << endl;
    return 0;
}