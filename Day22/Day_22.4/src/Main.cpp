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
        cout << "Number1   :   " << this->num1 << endl;
        // cout << "Number1   :   " << this->num2 << endl;  // OK but nor recommended
        cout << "Number2  :   " << Test::num2 << endl;
    }
    static void display_record(void)
    {
        Test t;
        cout << "Number2  :   " << t.num1 << endl;
        // cout<<"Number2  :   "<<t.num2<<endl; // OK: Not recommended
        cout << "Number2  :   " << t.num2 << endl;
    }
};
int Test::num2 = 20;
int main()
{
    Test t1;
    t1.show_record(); // Ok
    t1.display_record();

    return 0;
}