#include <iostream>
using namespace std;
class Test
{
private:
    int number1;

protected:
    int number2;

public:
    Test(void)
    {
        this->number1 = 10;
        this->number2 = 20;
    }
    friend void print(void);
};
void print(void)
{
    Test t1;
    cout << "Number 1     :   " << t1.number1 << endl;
    cout << "Number 2     :   " << t1.number2 << endl;
}
int main()
{
    Test t1;
    print();

    return 0;
}