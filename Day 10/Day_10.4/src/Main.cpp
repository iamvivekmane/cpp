#include <iostream>
using namespace std;
class Test
{
private:
    int num1;
    int num2;
    int num3;

public:
    // Parameterized Constructor's member initializer list
    Test(void) : num1(10), num2(20)
    {
        this->num3 = 30;
    };

    // Function to print record
    void print_record(void)
    {
        cout << "Number1  :   " << this->num1 << endl;
        cout << "Number2  :   " << this->num2 << endl;
        cout << "Number3  :   " << this->num3 << endl;
    }
};

int main()
{
    // Creating object of t1 class
    Test t1;
    // Calling print record on t1 object
    t1.print_record();

    return 0;
}