#include <iostream>
using namespace std;
namespace kdac
{

    class Test
    {
    private:
        int num1;

    protected:
        int num2;

    public:
        Test(void)
        {
            this->num1 = 10;
            this->num2 = 20;
        }
        friend void print(void);
    };

}
void kdac::print(void)
{
    Test t1;
    cout << "Element    :   " << t1.num1 << endl;
    cout << "Element    :   " << t1.num2 << endl;
}
int main()
{
    // Test t1; Not ok
    // t1.print(); Not ok
    // print(); Not ok

    kdac::print();

    return 0;
}