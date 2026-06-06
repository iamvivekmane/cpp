#include <iostream>
using namespace std;
class InstanceCounter
{
private:
    static int count;

public:
    InstanceCounter(void)
    {
        ++InstanceCounter::count;
    }
    static int get_count(void)
    {
        return InstanceCounter::count;
    }
};
int InstanceCounter::count;

int main()
{
    InstanceCounter c1, c2, c3;
    cout << "Instance count   :   " << InstanceCounter::get_count() << endl;
    return 0;
}