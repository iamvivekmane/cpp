#include <iostream>
using namespace std;
class Test
{
private:
    int num1;        // Instance variable
    int num2;        // Instance variable
    static int num3; // Class Level Variable

public:
    Test(void)
    {
        this->num1 = 0;
        this->num2 = 0;
    }
    void set_num1(int num1)
    {
        this->num1 = num1;
    }
    void set_num2(int num2)
    {
        this->num2 = num2;
    }
    static void set_num3(int num3)
    {
        Test::num3 = num3;
    }
    void print_record(void)
    {
        cout << "Number 1     :   " << this->num1 << endl;
        cout << "Number 2     :   " << this->num2 << endl;
        cout << "Number 3     :   " << Test::num3 << endl;
    }
};
int Test::num3 = 500; // Global Definition : To get memory for num3
int main()
{
    Test t1;
    t1.set_num1(10);
    t1.set_num2(20);
    Test::set_num3(30);
    t1.print_record();
    return 0;
}