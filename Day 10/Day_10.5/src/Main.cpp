#include <iostream>
using namespace std;
class Test
{
private:
    const int num1;

public:
    // Cannot modify the value of date member num1 because it is defined as constant
    Test(void) : num1(10)
    {
        // this->num1 = 10; //Not Ok
    }
    void show_record()
    {
        // ++this->num1; //Not Ok
        cout << "Number1  :   " << this->num1 << endl;
    }
    void print_record()
    {
        // ++this->num1; //Not Ok
        cout << "Number1  :   " << this->num1 << endl;
    }
};
int main()
{
    // Creating object of test class and calling show_record() & print_record() on object t1
    Test t1;
    t1.show_record();
    t1.print_record();

    return 0;
}