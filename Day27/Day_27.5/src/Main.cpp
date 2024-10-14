#include <iostream>
using namespace std;
class Test
{
    int number;

public:
    Test(void) : number(10)
    {
    }
    // Test *const this;
    void show_record(void)
    {
        this->number = 10;
        cout << "Number   :   " << this->number << endl;
    }
    // const Test *const this;
    void print_record(void) const
    {
        // this->show_record();
        // Test *const ptr = (Test *const)this;
        Test *const ptr = const_cast<Test *const>(this);
        ptr->show_record();
    }
};
int main()
{
    const Test t;
    t.print_record();
    return 0;
}