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
    Test(int num1, int num2, int num3)
    {
        this->num1 = num1;
        this->num2 = num2;
        this->num3 = num3;
    }

public:
    int get_num1(void)
    {
        return this->num1;
    }
    int get_num2(void)
    {
        return this->num2;
    }
};

int main()
{
    // Test t1(10, 20, 30);
    // cout << "Element  :   " << t1.num1 << endl; // Not ok
    // cout << "Element  :   " << t1.num2 << endl; // Not ok
    // cout << "Element  :   " << t1.num3 << endl; // Ok

    Test t1(10, 20, 30);
    cout << "Element    :   " << t1.get_num1() << endl;
    cout << "Element    :   " << t1.get_num2() << endl;
    cout << "Element    :   " << t1.num3 << endl;
    return 0;
}