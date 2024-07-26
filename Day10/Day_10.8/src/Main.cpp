#include <iostream>
using namespace std;
class Test
{
private:
    // 10 members;
    mutable int count;

public:
    Test(void) : count(0)
    {
    }
    void print(void) const
    {
        ++count;
    }
    int getCount(void)
    {
        return this->count;
    }
};
int main(void)
{
    Test t1, t2, t3;
    t1.print();
    t1.print();

    t2.print();
    t2.print();
    t2.print();

    t3.print();

    cout << "T1	:	" << t1.getCount() << endl;
    cout << "T2	:	" << t2.getCount() << endl;
    cout << "T3	:	" << t3.getCount() << endl;
    return 0;
}