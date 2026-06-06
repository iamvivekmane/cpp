#include <iostream>
using namespace std;
class Test
{
private:
    int num1;        // Instance variable
    int num2;        // Instance variable
    static int num3; // Class Level Variable

public:
    Test(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
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
    Test t1(10, 20);
    Test t2(30, 40);
    Test t3(50, 60);

    t1.print_record();
    t2.print_record();
    t3.print_record();

    return 0;
}