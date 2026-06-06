#include <iostream>
using namespace std;
class Test
{
private:
    int num1;
    static int num2;

public:
    Test(void) : num1(10) {}
    void show_record(void)
    {
        cout << "Number 1 :   " << num1 << endl;
        cout << "Number 2 :   " << num2 << endl;
    }
    static void display_record(void)
    {
        // cout << "Number 1 :   " << num1 << endl; // Not ok
        Test t;
        cout << "Number 1 :   " << t.num1 << endl;
        cout << "Number 2 :   " << num2 << endl;
    }
};
int Test::num2 = 20;
int main()
{
    Test t;
    t.show_record();
    // Test::display_record();
    return 0;
}