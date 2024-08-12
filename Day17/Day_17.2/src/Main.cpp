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
    // private: OK
    // protected : OK
protected: // OK
    friend int main(void);
};

int main()
{
    Test t1(10, 20, 30);
    cout << "Element  :   " << t1.num1 << endl;
    cout << "Element  :   " << t1.num2 << endl;
    return 0;
}