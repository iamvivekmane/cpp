#include <iostream>
using namespace std;
class Test
{
private:
    int num1;
    int num2;
    int num3;

public:
    // Constructor's member initializer list
    Test(void) : num2(num1), num1(10), num3(num2) {}

    // Parameterized Constructor's member initializer list
    Test(int num1, int num2, int num3) : num1(num1), num2(num2), num3(num3) {}

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
    //     // Creating object of t1 class
    //     Test t1;
    //     // Calling print record on t1 object
    //     t1.print_record();

    // Creating object of t2 class
    Test t2(20, 30, 40);
    // Calling print record on t2 object
    t2.print_record();

    return 0;
}